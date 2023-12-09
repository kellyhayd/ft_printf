/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:02:00 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/07 14:51:39 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	id_type_bonus(const char *str, int i, va_list ap);
int	print_char(char c);
int	print_str(char *str);
int	print_digit(char *base, int num);
int	print_hex(unsigned int num, char c);
int	print_ptrhex(unsigned long long ptr, int prefix);
int	print_dec_int(int num);
int	print_undec(unsigned int num);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_findchr(char c, char *tofind);
int	print_plus_sign(long long int num);
int	print_hashtag(char c, unsigned int num);
int	id_flag_bonus(const char *str, int i, va_list ap);

#endif
