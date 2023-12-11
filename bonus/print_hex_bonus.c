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

int	print_hex(unsigned long long lnum, char *base)
{
	int	n;

	n = 0;
	if (lnum < 16)
		n += ft_putnchar(base[lnum], 1, PRINT_ONLY);
	else if (lnum >= 16)
	{
		n += print_hex(lnum / 16, base);
		n += print_hex(lnum % 16, base);
	}
	return (n);
}

int	define_hex(unsigned long long lnum, char c, t_config *config)
{
	char				*base;
	int					n;
	int					len;
	int					count;

	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	n = 0;
	len  = num_len(lnum, 16);
	if (config->precision > len)
		count = config->precision;
	else
		count = len;
	if (config->width > count && !config->flags.minus)
		n += ft_putnchar(' ', (config->width - count), PRINT_ONLY);
	if (config->precision > len)
		n += ft_putnchar('0', (config->precision - len), PRINT_ONLY);
	n += print_hex(lnum, base);
	if (config->width > count && config->flags.minus)
		n += ft_putnchar(' ', (config->width - count), PRINT_ONLY);
	return (n);
}

int	define_ptrhex(void *ptr, t_config *config)
{
	int				n;
	unsigned long int	num;

	n = 0;
	if (!ptr)
	{
		n = ft_putstr("(nil)");
		return (n);
	}
	num = (unsigned long int)ptr;
	config->flags.hashtag = 1;
	n += define_hex(num, 'x', config);
	return (n);
}
