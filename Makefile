# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 18:56:59 by cagil             #+#    #+#              #
#    Updated: 2025/10/29 19:07:39 by cagil            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= CC
CFLAGS	= -Wall -Wextra -Werror
AR		= ar
ARFLAGS	= -rcs

SRC		= ft_printf.c \
		utils/ft_putchar_fd.c\
		utils/ft_putstr_fd.c\

all : $(NAME)

clean :

fclean : 

re : 

.PHONY: all clean fclean re