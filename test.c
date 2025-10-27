/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <cagil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:12:18 by cagil             #+#    #+#             */
/*   Updated: 2025/10/27 20:00:29 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	result;
	int nmb = 2;

	result = printf("hola mundo %d\n", nmb);
	printf("return printf: %d\n", result);

	return 0;
}
