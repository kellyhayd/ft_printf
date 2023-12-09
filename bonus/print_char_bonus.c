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

int	print_char(char c)
{
	return (ft_putchar_fd(c, 1));
}

int	print_str(char *str)
{
	int		n;

	n = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[n])
		n++;
	ft_putstr_fd(str, 1);
	return (n);
}
