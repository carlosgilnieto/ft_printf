/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:19:25 by cagil             #+#    #+#             */
/*   Updated: 2025/10/30 20:15:34 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(unsigned long ptr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	if (ptr != 0)
		count += ft_putnbr_lowhex(ptr);
	else
		count += ft_putchar('0');
	return (count);
}
