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

# define COUNT_ONLY 1
# define PRINT_ONLY 2


# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_flags
{
	int	minus;
	int	zero;
	int	plus;
	int	hashtag;
	int	space;
}	t_flags;

typedef struct s_config
{
	t_flags	flags;
	int		width;
	int		precision;
}	t_config;

void	find_flags(const char **str, t_config *config);
int		ft_printf(const char *str, ...);
int		define_config(const char **str, va_list ap, t_config *config);
int		id_type_bonus(const char **str, va_list ap, t_config *config);
int		process_char(char c, int mode);
int		print_str(char *str, t_config *config);
int		print_char(char c, t_config *config);
int		define_ptrhex(void *ptr, t_config *config);
int		define_hex(unsigned long long lnum, char c, t_config *config);
int		print_hex(unsigned long long lnum, char *base);
int		define_undec(unsigned int num);
int		define_num(int num, t_config *config);
int		process_signals(long int lnum, t_config *config, int mode);
int		process_zeros(long int lnum, t_config *config, int mode);
int		process_num(long int lnum, int mode);
int		num_len(unsigned long long num, unsigned int base);
int		ft_findchr(char c, char *tofind);
int		ft_putstr(char *s);
int		ft_putnchar(char c, int rep, int mode);
int		parse_number(const char **str);
int		ft_strlen(const char *s);

#endif
