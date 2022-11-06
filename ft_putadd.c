/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:19:15 by abelhadj          #+#    #+#             */
/*   Updated: 2022/11/06 14:19:13 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadd_hex(unsigned long int nbr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_putadd_hex(nbr / 16, len);
		ft_putadd_hex(nbr % 16, len);
	}
	else
	{
		ft_putchar(base[nbr], len);
	}
}

void	ft_putadd(void *addr, int *len)
{
	unsigned long int	ptr;

	ptr = (unsigned long int)addr;
	ft_putstr("0x", len);
	ft_putadd_hex(ptr, len);
}
