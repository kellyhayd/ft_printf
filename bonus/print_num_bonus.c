/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:07:09 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/07 15:31:39 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_dec_int(int num)
{
	long int	lnb;
	int			n;

	lnb = (long int)num;
	n = 0;
	if (lnb < 0)
	{
		n += ft_putchar_fd('-', 1);
		lnb *= -1;
	}
	if (lnb < 10)
		n += ft_putchar_fd(lnb + '0', 1);
	else if (lnb >= 10)
	{
		n += print_dec_int(lnb / 10);
		n += print_dec_int(lnb % 10);
	}
	return (n);
}

int	print_undec(unsigned int num)
{
	int				n;
	unsigned long	lnum;

	lnum = num;
	n = 0;
	if (lnum < 10)
		n += ft_putchar_fd(lnum + '0', 1);
	else if (lnum >= 10)
	{
		n += print_undec(lnum / 10);
		n += print_undec(lnum % 10);
	}
	return (n);
}
