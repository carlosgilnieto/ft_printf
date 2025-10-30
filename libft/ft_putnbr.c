/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:08:22 by cagil             #+#    #+#             */
/*   Updated: 2025/10/30 19:57:19 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	long	nbr;
	char	c;
	int		count;

	count = 0;
	nbr = n;
	if (nbr < 0)
	{
		count = 1;
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr >= 10)
		count += ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	count += write (1, &c, 1);
	return (count);
}
