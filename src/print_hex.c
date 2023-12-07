/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:33:14 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/07 15:33:36 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// int	print_digit(char *base, int num)
// {
// 	int	n;

// 	n = 0;
// 	while (num >= 16)
// 	{
// 		n += ft_putchar_fd(base[num % 16], 1);
// 		num /= 16;
// 	}
// 	n += ft_putchar_fd(base[num % 16], 1);
// 	return (n);
// }

int	print_hex(long int num, char c)
{
	char	*hex_up;
	char	*hex_low;
	char	*base;
	int		n;

	hex_up = "0123456789ABCDEF";
	hex_low = "0123456789abcdef";
	if (c == 'x')
		base = hex_low;
	else if (c == 'X')
		base = hex_up;
	n = 0;
	if (num < 0)
	{
		n += ft_putchar_fd('-', 1);
		num *= -1;
	}
	if (num < 16)
		n += ft_putchar_fd(base[num], 1);
	else if (num >= 16)
	{
		n += print_hex(num / 16, c);
		n += print_hex(num % 16, c);
	}
	return (n);
}

// int	print_numhex_low(long int num)
// {
// 	char	*base;
// 	int		n;

// 	base = "0123456789abcdef";
// 	n = 0;
// 	if (num < 0)
// 	{
// 		ft_putchar_fd('-', 1);
// 		n += 1;
// 		num *= -1;
// 	}
// 	if (num >= 16)
// 		n += print_digit(base, num);
// 	else
// 	{
// 		ft_putchar_fd(base[num % 16], 1);
// 		n += 1;
// 	}
// 	return (n);
// }

int	print_ptrhex(long int ptr)
{
	int					n;
	char				*base;

	base = "0123456789ABCDEF";
	ft_putstr_fd("0x", 1);
	n = 2;
	if (ptr < 0)
	{
		ft_putchar_fd('-', 1);
		n += 1;
		ptr *= -1;
	}
	// if (ptr >= 16)
	// 	n += print_digit(base, ptr);
	else
	{
		ft_putchar_fd(base[ptr % 16], 1);
		n += 1;
	}
	return (n);
}
