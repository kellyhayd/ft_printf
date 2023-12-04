/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:01:50 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/04 16:15:19 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	print_char(va_list ap)
{
	char	c;
	int		n;

	n = 1;
	c = va_arg(ap, int);
	ft_putchar_fd(c, 1);
	return (n);
}

int	print_str(va_list ap)
{
	char	*str;
	int		n;

	n = 0;
	str = va_arg(ap, char *);
	while (str[n])
	{
		ft_putchar_fd(str[n], 1);
		n++;
	}
	return (n);
}

int	print_dec_int(va_list ap)
{
	long	lnb;
	int		n;

	lnb = (long)va_arg(ap, int);
	n = 0;
	if (lnb < 0)
	{
		ft_putchar_fd('-', 1);
		lnb = -lnb;
		n += 1;
	}
	if (lnb < 10)
	{
		ft_putchar1(lnb + '0', 1);
		n += 1;
	}
	else if (lnb >= 10)
	{
		ft_putnbr_fd(lnb / 10, 1);
		ft_putnbr_fd(lnb % 10, 1);
	}
	return (n);
}

int	print_undec(va_list ap)
{
	int				n;
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	n = 0;
	if (num < 10)
	{
		ft_putchar_fd(num + '0', 1);
		n += 1;
	}
	else if (num >= 10)
	{
		while (num >= 10)
		{
			ft_putchar_fd((num % 10) + '0', 1);
			num %= 10;
			n += 1;
		}
	}
	return (n);
}

int	id_type(char c, va_list ap)
{
	int	n;

	n = 0;
	if (c == 'c')
		n = print_char(ap);
	if (c == 's')
		n = print_str(ap);
	if (c == 'p')
		n = print_hex(ap);
	if (c == 'd' || c == 'i')
		n = print_dec_int(ap);
	if (c == 'u')
		n = print_undec(ap);
	if (c == 'X')
		n = print_numhex_up(ap);
	if (c == 'x')
		n = print_numhex_low(ap);
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		n = 1;
	}
	return (n);
}

int	ft_printf(const char *str, ...)
{
	int		n;
	size_t	i;
	char	c;
	va_list args;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(&str[i], 1);
			n += 1;
		}
		if (str[i] == '%')
		{
			i++;
			c = str[i];
			n += id_type(c, args);
		}
		i++;
	}
	va_end(args);
}
