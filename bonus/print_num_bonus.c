/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:07:09 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/12 16:30:54 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	process_num_bonus(long int lnum, int mode)
{
	int	n;

	n = 0;
	if (lnum < 0)
		lnum *= -1;
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

int	process_zeros_bonus(long int lnum, t_config *config, int mode)
{
	int	len;
	int	count;

	count = 0;
	len = num_len(lnum, 10);
	if (lnum < 0)
	{
		len += ft_putnchar('-', 1, mode);
		count = 1;
	}
	if (config->flags.zero && (config->width > len))
		count += ft_putnchar('0', (config->width - len), mode);
	if (config->precision > len)
		count += ft_putnchar('0', (config->precision - len), mode);
	count += process_num_bonus(lnum, mode);
	return (count);
}

int	process_signals_bonus(long int lnum, t_config *config, int mode)
{
	int	n;

	n = 0;
	if (config->flags.plus && lnum >= 0)
		n += ft_putnchar('+', 1, mode);
	if (config->flags.space && lnum >= 0)
		n += ft_putnchar(' ', 1, mode);
	n += process_zeros_bonus(lnum, config, mode);
	return (n);
}

int	define_num_bonus(int num, t_config *config)
{
	int			count;
	int			n;
	long int	lnum;

	lnum = (long int)num;
	count = process_signals_bonus(lnum, config, COUNT_ONLY);
	n = 0;
	if (config->width > count && !config->flags.minus && !config->flags.zero)
		n += ft_putnchar(' ', (config->width - count), PRINT_ONLY);
	n += process_signals_bonus(lnum, config, PRINT_ONLY);
	if (config->width > count && config->flags.minus)
		n += ft_putnchar(' ', (config->width - count), PRINT_ONLY);
	return (n);
}

int	define_undec_bonus(unsigned int num, t_config *config)
{
	int				n;
	unsigned long	lnum;

	lnum = num;
	n = define_num_bonus(lnum, config);
	return (n);
}
