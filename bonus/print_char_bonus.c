/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:06:32 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/05 17:06:18 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_char(char c, t_config *config)
{
	int	n;

	n = 0;
	if (config->width > 1 && !config->flags.minus)
			n = ft_putnchar(' ', (config->width - 1), PRINT_ONLY);
	n += ft_putnchar(c, 1, PRINT_ONLY);
	if (config->width > 1 && config->flags.minus)
			n += ft_putnchar(' ', (config->width - 1), PRINT_ONLY);
	return (n);
}

int	print_str(char *str, t_config *config)
{
	int		n;
	int		len;
	int		count;

	if (!str)
	{
		if (config->precision < 6)
			config->precision = -1;
		print_str("(null)", config);
	}
	n = 0;
	len = ft_strlen(str);
	if (config->precision >= len || config->precision < 0)
		count = len;
	else
		count = config->precision;
	if (config->width >  count && !config->flags.minus)
			n = ft_putnchar(' ', (config->width - count), PRINT_ONLY);
	while (count-- && *str++)
		n += ft_putnchar(*str, 1, PRINT_ONLY);
	if (config->width > count && config->flags.minus)
			n += ft_putnchar(' ', (config->width - count), PRINT_ONLY);
	return (n);
}

int	process_char(char c, int mode)
{
	int	n;

	n = 0;
	if (mode == COUNT_ONLY)
		n = 1;
	else
		n = ft_putnchar(c, 1, PRINT_ONLY);
	return (n);
}
