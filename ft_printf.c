/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:28:26 by abelhadj          #+#    #+#             */
/*   Updated: 2022/11/07 19:38:14 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_percent_check(char format, va_list args, int *len)
{
	if (format == 'c')
		ft_putchar((char)va_arg(args, int), len);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (format == 'p')
		ft_putadd(va_arg(args, void *), len);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (format == 'x' || format == 'X')
		ft_putnbr_hex(va_arg(args, int), format, len);
	else if (format == '%')
		ft_putchar(format, len);
	else if (format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			ft_percent_check(format[i], args, &len);
		}
		else if (format[i] != '%')
			ft_putchar(format[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
