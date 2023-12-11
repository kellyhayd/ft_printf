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

int	id_type_bonus(const char **str, va_list ap, t_config *config)
{
	int	n;

	n = 0;
	if (**str == 'c')
		n = print_char(va_arg(ap, int), config);
	else if (**str == 's')
		n = print_str(va_arg(ap, char *), config);
	else if (**str == 'p')
		n = define_ptrhex(va_arg(ap, void *), config);
	else if (**str == 'd' || **str == 'i')
		n = define_num(va_arg(ap, int), config);
	else if (**str == 'u')
		n = define_undec(va_arg(ap, unsigned int));
	else if (**str == 'x' || **str == 'X')
		n = define_hex(va_arg(ap, unsigned int), **str, config);
	else if (**str == '%')
		n = ft_putnchar('%', 1, PRINT_ONLY);
	else
		return (0);
	(*str)++;
	return (n);
}

void	find_flags(const char **str, t_config *config)
{
	config->flags.hashtag = 0;
	config->flags.space = 0;
	config->flags.plus = 0;
	config->flags.zero = 0;
	config->flags.minus = 0;
	while (ft_findchr(**str, "# +0-"))
	{
		if (**str == '#')
			config->flags.hashtag = 1;
		if (**str == ' ')
			config->flags.space = 1;
		if (**str == '+')
			config->flags.plus = 1;
		if (**str == '0')
			config->flags.zero = 1;
		if (**str == '-')
			config->flags.minus = 1;
		(*str)++;
	}
	if (config->flags.minus)
		config->flags.zero = 0;
	if (config->flags.plus)
		config->flags.space = 0;
}

int	define_config(const char **str, va_list ap, t_config *config)
{
	find_flags(str, config);
	config->width = parse_number(str);
	if (**str == '.')
		config->precision = parse_number(str);
	else
		config->precision = - 1;
	return (id_type_bonus(str, ap, config));
}

int	ft_printf(const char *str, ...)
{
	int			n;
	va_list		args;
	t_config	config;

	va_start(args, str);
	n = 0;
	while (*str)
	{
		if (*str != '%')
		{
			ft_putnchar(*str, 1, PRINT_ONLY);
			n += 1;
			str++;
		}
		if (*str == '%')
		{
			str++;
			n += define_config(&str, args, &config);
		}
	}
	va_end(args);
	return (n);
}
