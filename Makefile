# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 21:55:57 by abelhadj          #+#    #+#              #
#    Updated: 2022/11/07 12:52:43 by abelhadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

ARC = ar rc

FLAGS = -Wall -Wextra -Werror

SRC = 	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c\
		ft_putnbr_hex.c ft_putadd.c ft_putnbr_u.c\

OBG = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBG)
	$(ARC) $(NAME) $(OBG)

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -o $@ -c $<

fclean :
	rm -f $(NAME) $(OBG)

clean : 
	rm -f $(OBG)

re : fclean all 

.PHONY: re fclean clean all
