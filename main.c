/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:12:18 by cagil             #+#    #+#             */
/*   Updated: 2025/10/30 20:52:00 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	main(void)
{
	// "Hola %c funciona %s, - %d", 'a', "bien" , -42.42)
	int result;

	result = 0;
	result = printf("%u", -2147483647);
	printf("\nreturn printf: %d\n", result);

	result = ft_printf("%u", -2147483647);
	printf("\nreturn ft_printf: %d\n", result);

	return 0;
}
