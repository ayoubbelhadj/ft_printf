/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:44:57 by abelhadj          #+#    #+#             */
/*   Updated: 2022/11/06 14:20:27 by abelhadj         ###   ########.fr       */
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
