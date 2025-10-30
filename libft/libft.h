/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:04:37 by cagil             #+#    #+#             */
/*   Updated: 2025/10/30 20:49:16 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>

int	ft_varprintf(const char *fmt, int i, int count, va_list vargs);

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int i);
int	ft_putptr(unsigned long ptr);
int	ft_putnbr_lowhex(unsigned long ptr);
int	ft_putnbr_upphex(unsigned long nbr);
int	ft_putsnbr(unsigned int nbr);

#endif
