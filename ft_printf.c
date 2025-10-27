/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:01:26 by cagil             #+#    #+#             */
/*   Updated: 2025/10/27 20:26:05 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(char const *format, ...)
{
	int	chars;
	va_list vargs; //Lista de todos los parametros dinamicos

	va_start(vargs, format);
	while (*format)
	{
		write (1, &format, 1);
		chars++;
		format++;
	}

}
