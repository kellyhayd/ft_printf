/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_bonus_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:33:14 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/11 12:54:31 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_hex_bonus(unsigned long long lnum, char *base)
{
	int	n;

	n = 0;
	if (lnum < 16)
		n += ft_putnchar(base[lnum], 1, PRINT_ONLY);
	else if (lnum >= 16)
	{
		n += print_hex_bonus(lnum / 16, base);
		n += print_hex_bonus(lnum % 16, base);
	}
	return (n);
}

int	define_hex_bonus(unsigned long long lnum, char c, t_config *config, int prefix)
{
	char	*base;
	int		n;
	int		len;
	int		count;

	base = NULL;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	n = 0;
	len  = num_len(lnum, 16);
	if (prefix)
		len += 2;
	if (config->precision > len)
		count = config->precision;
	else
		count = len;
	n += prefix_padding(config, count);
	if (config->flags.zero && (config->width > len))
		n += ft_putnchar('0', (config->width - len), PRINT_ONLY);
	if (config->precision > len)
		n += ft_putnchar('0', (config->precision - len), PRINT_ONLY);
	if (config->flags.hashtag)
	{
		if (c == 'x')
			n += ft_putstr("0x");
		else if (c == 'X')
			n += ft_putstr("0X");
	}
	n += print_hex_bonus(lnum, base);
	n += suffix_padding(config, n);
	return (n);
}

int	define_ptrhex_bonus(void *ptr, t_config *config)
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
	if (num > 0)
		config->flags.hashtag = 1;
	if (num == 0)
		n = ft_putnchar('0', 1, PRINT_ONLY);
	else
		n += define_hex_bonus(num, 'x', config, 1);
	return (n);
}
