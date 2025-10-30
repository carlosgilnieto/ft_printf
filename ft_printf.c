/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:01:26 by cagil             #+#    #+#             */
/*   Updated: 2025/10/30 18:25:17 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int	ft_printf(char const *format, ...)
{
	int		i;
	int		c_count;
	va_list vargs; //Lista de todos los parametros dinamicos

	i = 0;
	c_count = 0;
	va_start(vargs, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write (1, &format[i], 1);
			i++;
			c_count++;
		}
		else
		{
			c_count += ft_get_format(format[i +1], vargs);
			i += 2;
		}
	}
	va_end(vargs);
	return (c_count);
}
*/

int	ft_printf(char const *fmt, ...)
{
	int		i;
	int		count;
	va_list	vargs;

	i = 0;
	count = 0;
	va_start(vargs, fmt);
	count += ft_varprintf(fmt, i, count, vargs);
	va_end(vargs);
	return (count);
}
