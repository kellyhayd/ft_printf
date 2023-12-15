/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:06:32 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/11 17:54:56 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_char_bonus(char c, t_config *config)
{
	int	n;

	n = 0;
	if (config->width > 1 && !config->flags.minus)
		n += ft_putnchar(' ', (config->width - 1), PRINT_ONLY);
	n += ft_putnchar(c, 1, PRINT_ONLY);
	if (config->width > 1 && config->flags.minus)
		n += ft_putnchar(' ', (config->width - 1), PRINT_ONLY);
	return (n);
}

int	print_str_bonus(char *str, t_config *config)
{
	int	n;
	int	len;
	int	count;
	int	idx;

	if (!str)
	{
		if (config->precision >= 0 && config->precision < 6)
			config->precision = 0;
		return (print_str_bonus("(null)", config));
	}
	n = 0;
	len = ft_strlen(str);
	if (config->precision >= len || config->precision < 0)
		count = len;
	else
		count = config->precision;
	if (config->width >  count && !config->flags.minus)
		n += ft_putnchar(' ', (config->width - count), PRINT_ONLY);
	idx = count;
	while (idx > 0 && *str)
	{
		n += ft_putnchar(*str, 1, PRINT_ONLY);
		idx--;
		str++;
	}
	if (config->width > count && config->flags.minus)
		n += ft_putnchar(' ', (config->width - count), PRINT_ONLY);
	return (n);
}

int	process_char_bonus(char c, int mode)
{
	int	n;

	n = 0;
	if (mode == COUNT_ONLY)
		n = 1;
	else
		n = ft_putnchar(c, 1, PRINT_ONLY);
	return (n);
}
