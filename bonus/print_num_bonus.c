/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:07:09 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/14 20:14:36 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	process_num_bonus(unsigned long long lnum, int mode)
{
	int	n;

	n = 0;
	if (lnum < 10)
	{
		if (mode == COUNT_ONLY)
			n += 1;
		else
			n += ft_putnchar((lnum + '0'), 1, PRINT_ONLY);
	}
	else if (lnum >= 10)
	{
		n += process_num_bonus(lnum / 10, mode);
		n += process_num_bonus(lnum % 10, mode);
	}
	return (n);
}

int	process_zeros_bonus(unsigned long long lnum, t_config *config, int base, int mode)
{
	int	len;
	int	count;

	count = 0;
	if (config->precision == 0 && lnum == 0)
		len = 0;
	else
		len = num_len(lnum, base);
	if (config->flags.zero && (config->width > len))
		count += ft_putnchar('0', (config->width - len), mode);
	if (config->precision > len)
		count += ft_putnchar('0', (config->precision - len), mode);
	return (count);
}

int	process_signals_bonus(long num, t_config *config, int mode)
{
	int					n;
	t_config			override;
	unsigned long long	lnum;

	n = 0;
	if (num < 0)
		n += ft_putnchar('-', 1, mode);
	if (config->flags.plus && num >= 0)
		n += ft_putnchar('+', 1, mode);
	if (config->flags.space && num >= 0)
		n += ft_putnchar(' ', 1, mode);
	override = *config;
	override.width -= n;
	if (num < 0)
		lnum = -num;
	else
		lnum = num;
	n += process_zeros_bonus(lnum, &override, 10, mode);
	return (n);
}

int	define_num_bonus(long long num, t_config *config)
{
	int					count;
	int					n;
	unsigned long long	lnum;

	if (num < 0)
		lnum = -num;
	else
		lnum = num;
	count = process_signals_bonus(num, config, COUNT_ONLY);
	if (!(config->precision == 0 && lnum == 0))
		count += process_num_bonus(lnum, COUNT_ONLY);
	n = prefix_padding(config, count);
	n += process_signals_bonus(num, config, PRINT_ONLY);
	if (!(config->precision == 0 && lnum == 0))
		n += process_num_bonus(lnum, PRINT_ONLY);
	n += suffix_padding(config, count);
	return (n);
}

int	define_undec_bonus(unsigned long long lnum, t_config *config)
{
	int	n;
	int	count;

	count = process_zeros_bonus(lnum, config, 10, COUNT_ONLY);
	if (!(config->precision == 0 && lnum == 0))
		count += process_num_bonus(lnum, COUNT_ONLY);
	n = prefix_padding(config, count);
	n += process_zeros_bonus(lnum, config, 10, PRINT_ONLY);
	if (!(config->precision == 0 && lnum == 0))
		n += process_num_bonus(lnum, PRINT_ONLY);
	n += suffix_padding(config, count);
	return (n);
}

