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


// #include "ft_printf.h"
#include "./bonus/ft_printf_bonus.h"
#include <stdio.h>

int main(void)
{
	// //Test char
	// char	c = 'k';
	// int		n1;
	// int		n2;

	// ft_printf("Testando char\n");
	// n1 = ft_printf("ft_printf imprime char: %c\n", c);
	// n2 = printf("___Printf imprime char: %c\n", c);
	// printf("ft = %d\nPrintf = %d\n\n", n1, n2);

	// //Test str, %
	// ft_printf("Testanto str\n");
	// char	*str1 = "Kelly Hayd";
	// char	*str2 = "todo dia %% ela faz ! tudo sempre & igual?";
	// int		n3, n4, n5, n6;

	// n3 = ft_printf("ft_printf imprime str: %s\n", str1);
	// n4 = printf("___Printf imprime str: %s\n", str1);
	// n5 = ft_printf("ft_printf imprime str: %s\n", str2);
	// n6 = printf("___Printf imprime str: %s\n\n", str2);
	
	// //Test int
	// int	i = 420;
	// int	j = -42;
	// int	INT_MIN = -2147483648;
	// int	INT_MAX = 2147483647;
	// int	n7, n8, n9, n10, n11, n12, n13, n14;

	// ft_printf("Testando int\n");
	// n7 = ft_printf("ft_printf imprime int: %d\n", i);
	// n8 = printf("___Printf imprime int: %d\n", i);
	// printf("ft = %d\nprintf = %d\n", n7, n8);
	// n9 = ft_printf("ft_printf imprime int: %d\n", j);
	// n10 = printf("___Printf imprime int: %d\n", j);
	// printf("ft = %d\nprintf = %d\n", n9, n10);
	// n11 = ft_printf("ft_printf imprime int: %d\n", INT_MIN);
	// n12 = printf("___Printf imprime int: %d\n", INT_MIN);
	// printf("ft = %d\nprintf = %d\n", n11, n12);
	// n13 = ft_printf("ft_printf imprime int: %d\n", INT_MAX);
	// n14 = printf("___Printf imprime int: %d\n", INT_MAX);
	// printf("ft = %d\nprintf = %d\n\n", n13, n14);

	// //Test hex
	// unsigned int	UINT_MAX = 4294967295;
	// int	n45, n16, n17, n18, n19, n20, n21, n22, n23, n24;

	// ft_printf("Testando hex\n");
	// n15 = ft_printf("ft_printf imprime hex: %x\n", i);
	// n16 = printf("___Printf imprime hex: %x\n", i);
	// printf("ft = %d\nPrintf = %d\n", n15, n16);
	// n17 = ft_printf("ft_printf imprime hex: %X\n", j);
	// n18 = printf("___Printf imprime hex: %X\n", j);
	// printf("ft = %d\nPrintf = %d\n", n17, n18);
	// n19 = ft_printf("ft_printf imprime INT_MIN - hex: %x\n", INT_MIN);
	// n20 = printf("___Printf imprime INT_MIN - hex: %x\n", INT_MIN);
	// printf("ft = %d\nPrintf = %d\n", n19, n20);
	// n21 = ft_printf("ft_printf imprime INT_MAX - hex: %x\n", INT_MAX);
	// n22 = printf("___Printf imprime INT_MAX - hex: %x\n", INT_MAX);
	// printf("ft = %d\nPrintf = %d\n", n21, n22);
	// n23 = ft_printf("ft_printf imprime UINT_MAX - hex: %x\n", UINT_MAX);
	// n24 = printf("___Printf imprime UINT_MAX - hex: %x\n", UINT_MAX);
	// printf("ft = %d\nPrintf = %d\n", n23, n24);

	// //Test ptr hex
	// long long	LLONG_MAX = 9223372036854775807L;

	// ft_printf("Testando pointer hex\n");
	// int n25, n26, n27, n28, n29, n30, n31, n32, n33, n34, n35, n36;
	// n25 = ft_printf("ft_printf imprime hex: %p\n", i);
	// n26 = printf("___Printf imprime hex: %p\n", i);
	// printf("ft = %d\nPrintf = %d\n", n25, n26);
	// n27 = ft_printf("ft_printf imprime hex: %p\n", j);
	// n28 = printf("___Printf imprime hex: %p\n", j);
	// printf("ft = %d\nPrintf = %d\n", n27, n28);
	// n29 = ft_printf("ft_printf imprime INT_MIN - hex: %p\n", INT_MIN);
	// n30 = printf("___Printf imprime INT_MIN - hex: %p\n", INT_MIN);
	// printf("ft = %d\nPrintf = %d\n", n29, n30);
	// n31 = ft_printf("ft_printf imprime INT_MAX - hex: %p\n", INT_MAX);
	// n32 = printf("___Printf imprime INT_MAX - hex: %p\n", INT_MAX);
	// printf("ft = %d\nPrintf = %d\n", n31, n32);
	// n33 = ft_printf("ft_printf imprime UINT_MAX - hex: %p\n", UINT_MAX);
	// n34 = printf("___Printf imprime UINT_MAX - hex: %p\n", UINT_MAX);
	// printf("ft = %d\nPrintf = %d\n", n33, n34);
	// n35 = ft_printf("ft_printf imprime LLONG_MAX - hex: %p\n", LLONG_MAX);
	// n36 = printf("___Printf imprime LLONG_MAX - hex: %p\n", LLONG_MAX);
	// printf("ft = %d\nPrintf = %d\n\n", n35, n36);

	ft_printf("----------------------------------------------------------\n");
	ft_printf("-----------------------*** BONUS ***----------------------\n");
	ft_printf("----------------------------------------------------------\n\n");
	
	//Test int
	int	n37, n38, n39, n40, n41, n42, n43, n44, n45, n46, n47, n48, n49, n50, n51, n52;

	// ft_printf("Test '#'\n");
	// n37 = ft_printf("ft_printf imprime int: %#x\n", -2147483648);
	// n38 = printf("___Printf imprime int: %#x\n", -2147483648);
	// printf("ft = %d\nprintf = %d\n\n", n37, n38);

	// ft_printf("Test ' '\n");
	// n39 = ft_printf("ft_printf imprime int:% d\n", 42);
	// n40 = printf("___Printf imprime int:% d\n", 42);
	// printf("ft = %d\nprintf = %d\n\n", n39, n40);
	// n51 = ft_printf("ft_printf imprime int:% 1s\n", "kelly");
	// n52 = printf("___Printf imprime int:% 1s\n", "kelly");
	// printf("ft = %d\nprintf = %d\n\n", n51, n52);

	ft_printf("Test '-'\n");
	n41 = ft_printf("ft_printf imprime:%-1c\n", '0');
	n42 = printf("___Printf imprime:%-1c\n", '0');
	printf("ft = %d\nprintf = %d\n\n", n41, n42);

	// ft_printf("Test '+'\n");
	// n43 = ft_printf("ft_printf imprime int: %+d\n", 420);
	// n44 = printf("___Printf imprime int: %+u\n", 420);
	// printf("ft = %d\nprintf = %d\n\n", n43, n44);
	// n49 = ft_printf("ft_printf imprime int: %+d\n", -420);
	// n50 = printf("___Printf imprime int: %+u\n", -420);
	// printf("ft = %d\nprintf = %d\n\n", n49, n50);

	// ft_printf("Test '.'\n");
	// n45 = ft_printf("ft_printf imprime int: %.d\n", 42);
	// n46 = printf("___Printf imprime int: %.d\n", 42);
	// printf("ft = %d\nprintf = %d\n\n", n45, n46);

	// ft_printf("Test '0'\n");
	// n47 = ft_printf("ft_printf imprime int: %06d\n", 42);
	// n48 = printf("___Printf imprime int: %06d\n", 42);
	// printf("ft = %d\nprintf = %d\n", n47, n48);
	
	return (0);
}
