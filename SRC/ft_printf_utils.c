/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:01:54 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/04 15:01:55 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

/*
 * @brief Prints c to stdout.
 *
 * When write is successful it can transfer fewer bytes
 * due to partial writes. Therefore, we need to keep
 * trying until either it fails with a negative value
 * or it prints the byte we asked it to.
 *
 * @param char c
 * @param fd file descriptor
 */
void	ft_putchar_fd(char c, int fd)
{
	ssize_t	n;

	n = 0;
	while (n == 0)
		n = write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
