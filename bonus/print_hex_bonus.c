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

#include "ft_printf_bonus.h"

int	print_hex(unsigned int num, char c)
{
	char		*hex_up;
	char		*hex_low;
	char		*base;
	int			n;
	unsigned long long	lnum;

	hex_up = "0123456789ABCDEF";
	hex_low = "0123456789abcdef";
	if (c == 'x')
		base = hex_low;
	else if (c == 'X')
		base = hex_up;
	lnum = (unsigned long long)num;
	n = 0;
	if (lnum < 16)
		n += ft_putchar_fd(base[lnum], 1);
	else if (lnum >= 16)
	{
		n += print_hex(lnum / 16, c);
		n += print_hex(lnum % 16, c);
	}
	return (n);
}

int	print_ptrhex(unsigned long long ptr, int prefix)
{
	int		n;
	char	*base;

	base = "0123456789abcdef";
	n = 0;
	if (!ptr)
	{
		n = ft_putstr_fd("(nil)", 1);
		return (n);
	}
	if (prefix)
		n = ft_putstr_fd("0x", 1);
	if (ptr >= 16)
		n += print_ptrhex(ptr / 16, 0);
	n += ft_putchar_fd(base[ptr % 16], 1);

	return (n);
}
