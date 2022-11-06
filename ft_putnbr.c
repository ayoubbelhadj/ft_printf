/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:03:49 by abelhadj          #+#    #+#             */
/*   Updated: 2022/11/06 12:40:06 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', len);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
	else
		ft_putchar(nb + '0', len);
}
