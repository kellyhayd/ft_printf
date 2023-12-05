/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:07:09 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/05 17:09:54 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_dec_int(int num)
{
	long int	lnb;
	int			n;

	lnb = (long int)num;
	n = 0;
	if (lnb < 0)
	{
		ft_putchar_fd('-', 1);
		lnb = -lnb;
		n += 1;
	}
	if (lnb < 10)
	{
		ft_putchar_fd(lnb + '0', 1);
		n += 1;
	}
	else if (lnb >= 10)
	{
		lnb = lnb / 10;
		ft_putchar_fd((lnb % 10) + '0', 1);
	}
	return (n);
}

int	print_undec(unsigned int num)
{
	int	n;

	n = 0;
	if (num < 10)
	{
		ft_putchar_fd(num + '0', 1);
		n += 1;
	}
	else if (num >= 10)
	{
		while (num >= 10)
		{
			ft_putchar_fd((num % 10) + '0', 1);
			num %= 10;
			n += 1;
		}
	}
	return (n);
}
