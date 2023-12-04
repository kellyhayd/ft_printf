/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:02:05 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/04 15:02:06 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	// char	c;
	int		i;
	float	j;
	double	k;

	// c = 'k';
	i = 420;
	j = 42.5;
	k = 420;
	// ft_printf("ft_printf imprime char: %c Kelly\n", c);
	printf("Printf imprime int: %i\n", i);

	printf("Printf imprime float: %f\n", j);

	printf("Printf imprime decimal: %d\n", i);

	// printf("Printf imprime ")

	return (0);
}
