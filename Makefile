# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 18:56:59 by cagil             #+#    #+#              #
#    Updated: 2025/11/05 19:43:55 by cagil            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRC		= ft_printf.c \
		ft_printf_src/ft_varprintf.c \
		ft_printf_src/ft_putchar.c \
		ft_printf_src/ft_putstr.c \
		ft_printf_src/ft_putnbr.c \
		ft_printf_src/ft_putptr.c \
		ft_printf_src/ft_putnbr_lowhex.c \
		ft_printf_src/ft_putnbr_upphex.c \
		ft_printf_src/ft_putsnbr.c

OBJ 	= $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re