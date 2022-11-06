# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 21:55:57 by abelhadj          #+#    #+#              #
#    Updated: 2022/11/06 14:03:08 by abelhadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

ARC = ar rc

FLAGS = -Wall -Wextra -Werror

SRC = 	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c\
		ft_putnbr_base.c ft_puthex.c ft_putadd.c ft_putnbr_u.c\

OBG = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBG)
	$(ARC) $(NAME) $(OBG)

%.o : %.c 
	$(CC) $(FLAGS) -c $<

fclean :
	rm -f $(NAME) $(OBG)

clean : 
	rm -f $(OBG)

re : fclean all 