/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:22:38 by cagil             #+#    #+#             */
/*   Updated: 2025/10/29 20:19:59 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_get_format(char format, va_list varg)
{
	if (format == 'c')
	{
		ft_putchar(va_arg(varg, int));
		return (1);
	}
	if (format == 's')
		return (ft_putstr(va_arg(varg, char *)));
	if (format == 'd' || format == 'i')
	{
		//Falta saber la logitud del numero
		ft_putnbr(va_arg(varg, int));
		return (1);
	}
	return (0);
}
