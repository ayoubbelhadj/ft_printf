/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:56:40 by abelhadj          #+#    #+#             */
/*   Updated: 2022/11/06 14:12:12 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, char x, int *len)
{
	char	*base;

	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base, len);
}
