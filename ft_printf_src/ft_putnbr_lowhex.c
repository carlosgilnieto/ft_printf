/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lowhex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:18:57 by cagil             #+#    #+#             */
/*   Updated: 2025/11/13 23:16:19 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_src.h"

int	ft_putnbr_lowhex(unsigned long nbr)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
		count += ft_putnbr_lowhex(nbr / 16);
	count += write(1, &base[nbr % 16], 1);
	return (count);
}
