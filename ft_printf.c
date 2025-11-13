/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:01:26 by cagil             #+#    #+#             */
/*   Updated: 2025/11/13 23:17:54 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *fmt, ...)
{
	int		i;
	int		count;
	va_list	vargs;

	if (fmt == NULL)
		return (-1);
	i = 0;
	count = 0;
	va_start(vargs, fmt);
	count += ft_varprintf(fmt, i, count, vargs);
	va_end(vargs);
	return (count);
}
