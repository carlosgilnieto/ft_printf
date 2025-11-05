/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_varprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:16:51 by cagil             #+#    #+#             */
/*   Updated: 2025/11/05 19:48:10 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_src.h"

static int	check_format(const char fmt, va_list vargs)
{
	if (fmt == 'c')
		return (ft_putchar(va_arg(vargs, int)));
	if (fmt == 's')
		return (ft_putstr(va_arg(vargs, char *)));
	if (fmt == 'p')
		return (ft_putptr(va_arg(vargs, unsigned long)));
	if (fmt == 'd' || fmt == 'i')
		return (ft_putnbr(va_arg(vargs, int)));
	if (fmt == 'u')
		return (ft_putsnbr(va_arg(vargs, unsigned int)));
	if (fmt == 'x')
		return (ft_putnbr_lowhex(va_arg(vargs, unsigned int)));
	if (fmt == 'X')
		return (ft_putnbr_upphex(va_arg(vargs, unsigned int)));
	if (fmt == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_varprintf(const char *fmt, int i, int count, va_list vargs)
{
	if (!fmt)
		return (0);
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			count += check_format(fmt[i], vargs);
		}
		else
			count += write(1, &fmt[i], 1);
		i++;
	}
	return (count);
}
