/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:02:00 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/14 20:16:13 by krocha-h         ###   ########.fr       */
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
	int		uint;
}	t_config;

int		ft_printf(const char *str, ...);
int		define_config_bonus(const char **str, va_list ap, t_config *config);
int		id_type_bonus(const char **str, va_list ap, t_config *config);
int		process_char_bonus(char c, int mode);
int		print_str_bonus(char *str, t_config *config);
int		print_char_bonus(char c, t_config *config);
int		define_ptrhex_bonus(void *ptr, t_config *config);
int		define_hex_bonus(unsigned long long lnum, char c, t_config *config);
int		print_hex_bonus(unsigned long long lnum, char *base);
int		define_undec_bonus(unsigned long long lnum, t_config *config);
int		define_num_bonus(long long num, t_config *config);
int		process_signals_bonus(long lnum, t_config *config, int mode);
int		process_zeros_bonus(unsigned long long lnum, t_config *config, int base, int mode);
int		process_num_bonus(unsigned long long lnum, int mode);
int		num_len(long long num, unsigned int base);
int		ft_findchr(char c, char *tofind);
int		ft_putstr(char *s);
int		ft_putnchar(char c, int rep, int mode);
int		parse_number(const char **str);
int		ft_strlen(const char *s);
void	define_flags_bonus(const char **str, t_config *config);
int		prefix_padding(t_config *config, int count);
int		suffix_padding(t_config *config, int count);

#endif
