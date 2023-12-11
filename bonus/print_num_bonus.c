/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:07:09 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/11 13:20:21 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	process_num_bonus(long int lnum, int mode)
{
	int	n;

	n = 0;
	if (lnum < 10)
	{
		if (COUNT_ONLY)
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

	len = num_len(lnum, 10);
	count = 0;
	if (config->flags.zero && (config->width > len))
		count += ft_putnchar('0', (config->width - len), mode);
	if (config->precision > len)
		count += ft_putnchar('0', (config->precision - len), mode);
	count += process_num_bonus(lnum, mode);
	return (count);
}

int	process_signals_bonus(long int lnum, t_config *config, int mode)
{
	int	size;

	size = 0;
	if (config->flags.plus && lnum >= 0)
		size += ft_putnchar('+', 1, mode);
	if (config->flags.space && lnum >= 0)
		size += ft_putnchar(' ', 1, mode);
	if (lnum < 0)
		size += ft_putnchar('-', 1, mode);
	size += process_zeros_bonus(lnum, config, mode);
	return (size);
}

int	define_num_bonus(int num, t_config *config)
{
	int			count;
	int			n;
	long int	lnum;

	lnum = (long int)num;
	count = process_signals_bonus(lnum, config, COUNT_ONLY);
	n = 0;
	if (config->width > count && !config->flags.minus)
		n += ft_putnchar(' ', (config->width - count), PRINT_ONLY);
	n += process_signals_bonus(lnum, config, PRINT_ONLY);
	if (config->width > count && config->flags.minus)
		n += ft_putnchar(' ', (config->width - count), PRINT_ONLY);
	return (n);







	// long int	lnum;
	// int			n;

	// lnum = (long int)num;
	// n = 0;
	// len  = num_len(lnum, 10);
	// if (lnum < 0)
	// {
	// 	len += 1;
	// 	config->flags.plus = 0;
	// 	config->flags.space = 0;
	// }
	// if (config->precision)
	// 	config->flags.zero = 0;
	// count = count_print(lnum, len, &config)
	// if (config->width > count && !config->flags.minus)
	// 	n += ft_putnchar(' ', (config->width - count));
	// if (lnum > 0 && config->flags.plus)
	// 	n += ft_putnchar('+', 1);
	// if (config->flags.space && !config->flags.plus)
	// 	n += ft_putnchar(' ', 1);
	// if (lnum < 0)
	// 	n += ft_putnchar('-', 1);
	// if (config->flags.zero)
	// 	n += ft_putnchar('0', (config->width - len));
	// if (config->precision > len)
	// 	n += ft_putnchar('0', (config->precision - len));
	// n += print_dec_int(lnum);
	// if (config->width > count && config->flags.minus)
	// 	n += ft_putnchar(' ', (config->width - count));
}

int	define_undec_bonus(unsigned int num)
{
	int				n;
	unsigned long	lnum;

	lnum = num;
	n = 0;
	if (lnum < 10)
		n += ft_putnchar(lnum + '0', 1, PRINT_ONLY);
	else if (lnum >= 10)
	{
		n += define_undec_bonus(lnum / 10);
		n += define_undec_bonus(lnum % 10);
	}
	return (n);
}
