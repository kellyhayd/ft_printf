/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_str_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:01:54 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/15 15:57:16 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putnchar(char c, int rep, int mode)
{
	int	count;

	if (mode == COUNT_ONLY)
		return (rep);
	count = rep;
	while (count-- > 0)
		write(1, &c, 1);
	return (rep);
}

int	ft_putstr(char *s)
{
	int	n;

	n = 0;
	while (s[n])
	{
		ft_putnchar(s[n], 1, PRINT_ONLY);
		n++;
	}
	return (n);
}

int	ft_findchr(char c, char *tofind)
{
	int	i;

	i = 0;
	while (tofind[i])
	{
		if (c == tofind[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(const char *s)
{
	int	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}
