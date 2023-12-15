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

int	process_hex_bonus(unsigned long long lnum, char *base, int mode)
{
	int	n;

	n = 0;
	if (lnum < 16)
	{
		if (mode == COUNT_ONLY)
			n += 1;
		else
			n += ft_putnchar(base[lnum], 1, PRINT_ONLY);
	}
	else if (lnum >= 16)
	{
		n += process_hex_bonus(lnum / 16, base, mode);
		n += process_hex_bonus(lnum % 16, base, mode);
	}
	return (n);
}

int	process_hashtag_bonus(unsigned long long lnum, char c, t_config *config, int mode)
{
	int n;

	n = 0;
	if (config->flags.hashtag && lnum != 0)
	{
		if (mode == COUNT_ONLY)
			n += 2;
		else if (c == 'x')
			n += ft_putstr("0x");
		else if (c == 'X')
			n += ft_putstr("0X");
	}
	n += process_zeros_bonus(lnum, config, 16, mode);
	return (n);
}

int	define_hex_bonus(unsigned long long lnum, char c, t_config *config)
{
	char	*base;
	int		n;
	int		count;

	base = NULL;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	count = process_hashtag_bonus(lnum, c, config, COUNT_ONLY);
	if (!(config->precision == 0 && lnum == 0))
		count += process_hex_bonus(lnum, base, COUNT_ONLY);
	n = prefix_padding(config, count);
	n += process_hashtag_bonus(lnum, c, config, PRINT_ONLY);
	if (!(config->precision == 0 && lnum == 0))
		n += process_hex_bonus(lnum, base, PRINT_ONLY);
	n += suffix_padding(config, n);
	return (n);
}

int	define_ptrhex_bonus(void *ptr, t_config *config)
{
	int					n;
	int					count;
	unsigned long int	lnum;

	n = 0;
	lnum = (unsigned long int)ptr;
	if (!ptr)
	{
		count = 5;
		n = prefix_padding(config, count);
		n += ft_putstr("(nil)");
		n += suffix_padding(config, n);
		return (n);
	}
	if (lnum > 0)
		config->flags.hashtag = 1;
	if (lnum == 0)
		n = ft_putnchar('0', 1, PRINT_ONLY);
	else
		n += define_hex_bonus(lnum, 'x', config);
	return (n);
}
