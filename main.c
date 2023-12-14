/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:02:05 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/14 20:17:50 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "ft_printf.h"
#include "bonus/ft_printf_bonus.h"
#include <stdio.h>

int main(void)
{
	//Test char
	// char	c = 'k';
	// int		n1;
	// int		n2;


	// n1 = ft_printf("%c", '0');
	// printf("\n%d\n", n1);
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

	// ft_printf("----------------------------------------------------------\n");
	// ft_printf("-----------------------*** BONUS ***----------------------\n");
	// ft_printf("----------------------------------------------------------\n\n");

	//Test int
	int n1, n2;

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

	// ft_printf("Test '-'\n");
	// n1 = ft_printf("ft_printf imprime: %-1c$\n", '0');
	// n2 = printf("___printf imprime: %-1c$\n", '0');
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 1\n");
	// n1 = ft_printf("ft_printf imprime:%-1c$\n", '0');
	// n2 = printf("___printf imprime:%-1c$\n", '0');
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 2\n");
	// n1 = ft_printf("ft_printf imprime: %-2c$\n", '0');
	// n2 = printf("___printf imprime: %-2c$\n", '0');
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 3\n");
	// n1 = ft_printf("ft_printf imprime: %-3c$\n", '0' - 256);
	// n2 = printf("___printf imprime: %-3c$\n", '0' - 256);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 4\n");
	// n1 = ft_printf("ft_printf imprime:%-4c$ \n", '0' + 256);
	// n2 = printf("___printf imprime:%-4c$ \n", '0' + 256);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 5\n");
	// n1 = ft_printf("ft_printf imprime: %-1c$ %-2c$ %-3c$ \n", '0', 0, '1');
	// n2 = printf("___printf imprime: %-1c$ %-2c$ %-3c$ \n", '0', 0, '1');
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 6\n");
	// n1 = ft_printf("ft_printf imprime: %-1c$ %-2c$ %-3c$ \n", ' ', ' ', ' ');
	// n2 = printf("___printf imprime: %-1c$ %-2c$ %-3c$ \n", ' ', ' ', ' ');
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 7\n");
	// n1 = ft_printf("ft_printf imprime: %-1c$ %-2c$ %-3c$ \n", '1', '2', '3');
	// n2 = printf("___printf imprime: %-1c$ %-2c$ %-3c$ \n", '1', '2', '3');
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 8\n");
	// n1 = ft_printf("ft_printf imprime: %-1c$ %-2c$ %-3c$ \n", '2', '1', 0);
	// n2 = printf("___printf imprime: %-1c$ %-2c$ %-3c$ \n", '2', '1', 0);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 9\n");
	// n1 = ft_printf("ft_printf imprime: %-1c$ %-2c$ %-3c$ \n", 0, '1', '2');
	// n2 = printf("___printf imprime: %-1c$ %-2c$ %-3c$ \n", 0, '1', '2');
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 10\n");
	// n1 = ft_printf("ft_printf imprime:%1s$\n", "");
	// n2 = printf("___printf imprime:%1s$\n", "");
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 11\n");
	// n1 = ft_printf("ft_printf imprime:%-1s$\n", "");
	// n2 = printf("___printf imprime:%-1s$\n", "");
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 12\n");
	// n1 = ft_printf("ft_printf imprime: %-2s$\n", "");
	// n2 = printf("___printf imprime: %-2s$\n", "");
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 13\n");
	// n1 = ft_printf("ft_printf imprime:%-3s$ \n", "");
	// n2 = printf("___printf imprime:%-3s$ \n", "");
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 14\n");
	// n1 = ft_printf("ft_printf imprime: %-0s$ \n", "");
	// n2 = printf("___printf imprime: %-0s$ \n", "");
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 15\n");
	// n1 = ft_printf("ft_printf imprime: %-s$ \n", "-");
	// n2 = printf("___printf imprime: %-s$ \n", "-");
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 16\n");
	// n1 = ft_printf("ft_printf imprime: %-1s$ %-2s$ \n", "", "-");
	// n2 = printf("___printf imprime: %-1s$ %-2s$ \n", "", "-");
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 17\n");
	// n1 = ft_printf("ft_printf imprime: %-3s$ %-4s$ \n", " - ", "");
	// n2 = printf("___printf imprime: %-3s$ %-4s$ \n", " - ", "");
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 18\n");
	// n1 = ft_printf("ft_printf imprime: %-2s$ %-3s$ %-4s$ %-5s$ \n", " - ", "", "4", "");
	// n2 = printf("___printf imprime: %-2s$ %-3s$ %-4s$ %-5s$ \n", " - ", "", "4", "");
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// ft_printf("Test 19\n");
	// n1 = ft_printf("ft_printf imprime: %-3s$ %-3s$ %-4s$ %-5s$ %-3s$ \n", " - ", "", "4", "", "2 ");
	// n2 = printf("___printf imprime: %-3s$ %-3s$ %-4s$ %-5s$ %-3s$ \n", " - ", "", "4", "", "2 ");
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%2p$\n", -1);
	// n2 = printf("%2p$\n", -1);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-2p$\n", -1);
	// n2 = printf("%-2p$\n", -1);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-2p$\n", 1);
	// n2 = printf("%-2p$\n", 1);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-2p$\n", 15);
	// n2 = printf("%-2p$\n", 15);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-3p$\n", 16);
	// n2 = printf("%-3p$\n", 16);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-4p$\n", 17);
	// n2 = printf("%-4p$\n", 17);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-1d$\n", 0);
	// n2 = printf("%-1d$\n", 0);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-2d$\n", -1);
	// n2 = printf("%-2d$\n", -1);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-3d$\n", 1);
	// n2 = printf("%-3d$\n", 1);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-4d$\n", 9);
	// n2 = printf("%-4d$\n", 9);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-1d$\n", 10);
	// n2 = printf("%-1d$\n", 10);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-2d$\n", 11);
	// n2 = printf("%-2d$\n", 11);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-3d$\n", 15);
	// n2 = printf("%-3d$\n", 15);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-4d$\n", 16);
	// n2 = printf("%-4d$\n", 16);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-5d$\n", 17);
	// n2 = printf("%-5d$\n", 17);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-1d$\n", 99);
	// n2 = printf("%-1d$\n", 99);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-9p %-10p$\n", -2147483647, 2147483647);
	// n2 = printf("%-9p %-10p$\n", -2147483647, 2147483647);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-11p %-12p$\n", -2147483647, 2147483647);
	// n2 = printf("%-11p %-12p$\n", -2147483647, 2147483647);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	n1 = ft_printf("%-13p %-14p$\n", 4294967295, -4294967295);
	n2 = printf("%-13p %-14p$\n", 4294967295, -4294967295);
	printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = printf("%-1u$\n", 10);
	// n2 = ft_printf("%-1u$\n", 10);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-4u$\n", 16);
	// n2 = printf("%-4u$\n", 16);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-5u$\n", 17);
	// n2 = printf("%-5u$\n", 17);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-1u$\n", 99);
	// n2 = printf("%-1u$\n", 99);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-1x$\n", 0);
	// n2 = printf("%-1x$\n", 0);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	n1 = ft_printf("%02d$\n", -1);
	n2 = printf("%02d$\n", -1);
	printf("ft = %d\nprintf = %d\n\n", n1, n2);

	n1 = ft_printf("%03d$\n", -11);
	n2 = printf("%03d$\n", -11);
	printf("ft = %d\nprintf = %d\n\n", n1, n2);

	n1 = ft_printf("%04d$\n", -14);
	n2 = printf("%04d$\n", -14);
	printf("ft = %d\nprintf = %d\n\n", n1, n2);

	n1 = ft_printf("%05d$\n", -15);
	n2 = printf("%05d$\n", -15);
	printf("ft = %d\nprintf = %d\n\n", n1, n2);

	n1 = printf("%06d ", -16);
	n2 = ft_printf("%06d ", -16);
	printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = printf("%-13u ", 4294967295);
	// n2 = ft_printf("%-13u ", 4294967295);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = printf("%011d ", 2147483647);
	// n2 = ft_printf("%011d ", 2147483647);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = printf("%-12u ", -2147483647);
	// n2 = ft_printf("%-12u ", -2147483647);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = printf("%-14u ", 4294967295);
	// n2 = ft_printf("%-14u ", 4294967295);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = printf("%-15u ", 9223372036854775807LL);
	// n2 = ft_printf("%-15u ", 9223372036854775807LL);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);

	// n1 = ft_printf("%-9u %-10u %-11u %-12u %-13u %-14u %-15u\n", 2147483647, -2147483647, 2147483647, -2147483647, 4294967295, 0, -42);
	// n2 = printf("%-9u %-10u %-11u %-12u %-13u %-14u %-15u\n", 2147483647, -2147483647, 2147483647, -2147483647, 4294967295, 0, -42);
	// printf("ft = %d\nprintf = %d\n\n", n1, n2);


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
