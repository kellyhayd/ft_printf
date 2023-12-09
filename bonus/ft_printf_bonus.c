/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:01:50 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/07 14:50:57 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdarg.h>

int	id_type_bonus(const char *str, int i, va_list ap)
{
	int	n;

	n = 0;
	if (ft_findchr(str[i], "# +-0."))
		n = id_flag_bonus(str, i, ap);
	else if (str[i] == 'c')
		n = print_char(va_arg(ap, int));
	else if (str[i] == 's')
		n = print_str(va_arg(ap, char *));
	else if (str[i] == 'p')
		n = print_ptrhex(va_arg(ap, unsigned long long), 1);
	else if (str[i] == 'd' || str[i] == 'i')
		n = print_dec_int(va_arg(ap, int));
	else if (str[i] == 'u')
		n = print_undec(va_arg(ap, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		n = print_hex(va_arg(ap, unsigned int), str[i]);
	else if (str[i] == '%')
		n = ft_putchar_fd('%', 1);
	return (n);
}

int	ft_printf(const char *str, ...)
{
	int		n;
	int		i;
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
			n += id_type_bonus(str, i + 1, args);
			i += 2;
		}
		i++;
	}
	va_end(args);
	return (n);
}
