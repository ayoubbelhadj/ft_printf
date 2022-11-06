/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:20:46 by abelhadj          #+#    #+#             */
/*   Updated: 2022/11/06 15:32:03 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);

void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putnbr_hex(unsigned int nbr, char x, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putadd(void *addr, int *len);
void	ft_putnbr_u(unsigned int n, int *len);

#endif
