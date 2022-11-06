/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:33:54 by abelhadj          #+#    #+#             */
/*   Updated: 2022/11/06 15:34:04 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nbr, char *base, int *len)
{
	unsigned int	i;

	i = 16;
	if (nbr >= i)
	{
		ft_putnbr_base(nbr / i, base, len);
		ft_putnbr_base(nbr % i, base, len);
	}
	else
	{
		ft_putchar(base[nbr], len);
	}
}

void	ft_putnbr_hex(unsigned int nbr, char x, int *len)
{
	char	*base;

	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base, len);
}
