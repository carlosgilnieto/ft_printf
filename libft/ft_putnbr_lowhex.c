/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lowhex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:18:57 by cagil             #+#    #+#             */
/*   Updated: 2025/11/05 19:09:37 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_lowhex(unsigned int nbr)
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
