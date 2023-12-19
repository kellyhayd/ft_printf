/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:06:32 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/19 15:12:03 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_char_bonus(char c, t_config *config)
{
	int	n;

	n = prefix_padding(config, 1);
	n += ft_putnchar(c, 1, PRINT_ONLY);
	n += suffix_padding(config, 1);
	return (n);
}

int	print_str_bonus(char *str, t_config *config)
{
	int	n;
	int	len;
	int	count[2];

	if (!str)
	{
		if (config->precision >= 0 && config->precision < 6)
			config->precision = 0;
		return (print_str_bonus("(null)", config));
	}
	len = ft_strlen(str);
	if (config->precision >= len || config->precision < 0)
		count[0] = len;
	else
		count[0] = config->precision;
	count[1] = count[0];
	n = prefix_padding(config, count[0]);
	while (count[1] > 0 && *str)
	{
		n += ft_putnchar(*str, 1, PRINT_ONLY);
		count[1] -= 1;
		str++;
	}
	n += suffix_padding(config, count[0]);
	return (n);
}
