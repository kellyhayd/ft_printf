/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:02:05 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/07 15:07:02 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	// char	c;
	int		i;
	int		j;
	int		k;
	int		n1;
	int		n2;


	// c = 'k';
	i = 420;
	j = -42;
	k = 420000;

	// ft_printf("ft_printf imprime char: %c Kelly\n", c);
	// printf("Printf imprime int: %c\n", c);

	// n1 = ft_printf("ft_printf imprime int: %d\n", i);
	// n2 = printf("___Printf imprime int: %d\n", i);
	// printf("ft = %d\nprintf = %d\n", n1, n2);
	// ft_printf("ft_printf imprime int: %cdKelly\n", j);
	// printf("___Printf imprime int: %d\n", j);
	// ft_printf("ft_printf imprime int: %cdKelly\n", k);
	// printf("___Printf imprime int: %d\n", k);

	n1 = ft_printf("ft_printf imprime hex: %x\n", i);
	n2 = printf("___Printf imprime hex: %x\n", i);
	printf("ft = %d\nPrintf = %d\n", n1, n2);

	return (0);
}
