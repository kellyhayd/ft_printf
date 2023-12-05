/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:01:50 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/05 17:30:06 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdarg.h>

int	id_type(char c, va_list ap)
{
	int	n;

	n = 0;
	if (c == 'c')
		n = print_char(va_arg(ap, int));
	if (c == 's')
		n = print_str(va_arg(ap, char *));
	if (c == 'p')
		n = print_ptrhex(va_arg(ap, long));
	if (c == 'd' || c == 'i')
		n = print_dec_int(va_arg(ap, int));
	if (c == 'u')
		n = print_undec(va_arg(ap, unsigned int));
	if (c == 'X')
		n = print_numhex_up(va_arg(ap, long int));
	if (c == 'x')
		n = print_numhex_low(va_arg(ap, long int));
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
	int		i;
	char	c;
	va_list	args;

	va_start(args, str);
	n = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
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
	return (n);
}
