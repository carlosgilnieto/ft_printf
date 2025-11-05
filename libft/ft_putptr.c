/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:19:25 by cagil             #+#    #+#             */
/*   Updated: 2025/11/05 18:30:06 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(unsigned long ptr)
{
	int	count;

	count = 0;
	if (ptr != 0)
	{
		count += ft_putstr("0x");
		count += ft_putnbr_lowhex(ptr);
	}
	else
		return (ft_putstr("(nil)"));
	return (count);
}
