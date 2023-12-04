/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:33:14 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/04 16:24:15 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	print_digit(char *base, int num)
{
	int	n;

	n = 0;
	while (num >= 16)
	{
		ft_putchar_fd(&base[num % 16], 1);
		num %= 16;
		n += 1;
	}
	return (n);
}

int	print_numhex_up(va_list ap)
{
	char	*base;
	int		num;
	int		n;

	base = "0123456789ABCDEF";
	num = va_arg(ap, int);
	n = 0;
	if (num < 0)
	{
		ft_putchar_fd('-', 1);
		n += 1;
		num *= -1;
	}
	if (num >= 16)
		n += print_digit(base, num);
	else
	{
		ft_putchar_fd(&base[num % 16], 1);
		n += 1;
	}
	return (n);
}

int	print_numhex_low(va_list ap)
{
	char	*base;
	int		num;
	int		n;

	base = "0123456789abcdef";
	num = va_arg(ap, int);
	n = 0;
	if (num < 0)
	{
		ft_putchar_fd('-', 1);
		n += 1;
		num *= -1;
	}
	if (num >= 16)
		n += print_digit(base, num);
	else
	{
		ft_putchar_fd(&base[num % 16], 1);
		n += 1;
	}
	return (n);
}

int	print_ptrhex(va_list ap)
{
	unsigned long long	ptr;
	int					n;
	char				*base;

	base = "0123456789ABCDEF";
	ptr = (unsigned long long)va_arg(ap, void *);
	ft_putstr_fd("0x", 1);
	n = 2;
	if (ptr < 0)
	{
		ft_putchar_fd('-', 1);
		n += 1;
		ptr *= -1;
	}
	if (ptr >= 16)
		n += print_digit(base, ptr);
	else
	{
		ft_putchar_fd(&base[ptr % 16], 1);
		n += 1;
	}
	return (n);
}
