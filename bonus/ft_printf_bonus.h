/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:02:00 by krocha-h          #+#    #+#             */
/*   Updated: 2023/12/19 15:11:17 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# define COUNT_ONLY 1
# define PRINT_ONLY 2

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef unsigned long long	t_ull;

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

/**
 * @brief Display text according to a format string,
 reproducing printf's behavior.
 *
 * @param str The string 'str' should contain format specifiers,
 * each of  which  are replaced  with  successive arguments
 * according to the specifier.
 * @param arg The argument of any type
 * @return The number of characters printed
 *
 * @details
 * %d: Argument will be used as decimal integer
 * (signed or unsigned) | %i: Argument will be used as a signed integer
 *	| %u: An unsigned decimal integer | %x or %X: An unsigned hexadecimal
 * integer | %p: The void * pointer argument has to be printed in
 * hexadecimal format | %s: A string | %c: A character |
 *	* %% signifies a literal "%"
 */
int		ft_printf(const char *str, ...);

/**
 * @brief Defines the configuration of the argument that will be printed
 *
 *
 * @param str A pointer to the string (first argument) of ft_printf
 * @param ap List of arguments
 * @param config Struct that contains information of the flags
 * @return The number of characters printed
 *
 * @details It will Calls the function that will define the flags that will
 * be used, determinates the width and the precision of the print and Callss
 * id_type to follow the specific function by argument type
 */
int		define_config_bonus(const char **str, va_list ap, t_config *config);

/**
 * @brief Defines the configuration of the `flags` used in the
 * specifier of argument
 *
 * @param str A pointer to the string (first argument) of ft_printf
 * @param config Struct that contains information of the flags
 *
 * @details
 * Go through the specifier in search of flags that will be turned on
 * and it considers interference from one flag to another
 */
void	define_flags_bonus(const char **str, t_config *config);

/**
 * @brief Identify the type of the arguments acoording to
 the specifier in the string.
 *
 * @param c The specifier after `%` that determinates
 * the type of argument
 * @param ap The list of arguments specified after the string
 * @param config Struct that contains information of the flags
 * @return The number of characters printed
 */
int		id_type_bonus(const char **str, va_list ap, t_config *config);

/**
 * @brief Prints a `character`
 *
 * @param c The character (argument) to be printed
 * @param config Struct that contains information of the flags
 * @return The number of characters printed
 *
 * @details
 * Consider if width is bigger than the number of printed character (1)
 * and prints spaces before or after the argument to complete the size of width
 */
int		print_char_bonus(char c, t_config *config);

/**
 * @brief Prints a `string`
 *
 * @param str The string (argument) to be printed
 * @param config Struct that contains information of the flags
 * @return The number of characters printed
 *
 * @details Consider if width is bigger than the number of printed character (1)
 * and prints spaces before or after the argument to complete the size of width
 */
int		print_str_bonus(char *str, t_config *config);

/**
 * @brief Configures and prints a void pointer in hexadecimal format
 *
 * @param ptr Void pointer to be converted and printed
 * @param config Struct that contains information of the flags
 * @return The number of characters printed
 *
 * @details
 * Converts the pointer to a unsigned long integer before Callsing the
 * define_hex function to print the integer. Consider if width is bigger
 * than the number of printed characters and prints spaces before or after
 * the argument to complete the size of width;
 * If NULL pointer, it still considers the width to be printed and
 * prints `(nil)` instead of an integer
 */
int		define_ptrhex_bonus(void *ptr, t_config *config);

/**
 * @brief Configures and prints an integer in hexadecimal format
 *
 * @param lnum Unsigned long long number to be converted and printed
 * @param c A character (`x` or `X`) that defines if the alphabetic
 * characters will be printed in lower or upper case
 * @param config Struct that contains information of the flags
 * @return The number of characters printed
 *
 * @details
 * The function considers if the `#` flag is present and will be printed
 * `0x` before the integer converted by Callsing `process_hash` function;
 * Consider if width is bigger than the number of printed characters
 * and prints spaces before or after the argument to complete the size of width;
 */
int		define_hex_bonus(t_ull lnum, char c, t_config *config);

/**
 * @brief Configures and prints an unsigned integer
 *
 * @param lnum Unsigned long long number to be printed
 * @param config Struct that contains information of the flags
 * @return The number of characters printed
 *
 * @details
 * Calls `process_zeros` function that will calculate if so, how many `0`
 * will be printed before the integer
 * Consider if width is bigger than the number of printed characters
 * and prints spaces before or after the argument to complete the size of width;
 * Calls `process_num` function that will be print the number in decimal base;
 * The function calculates the size of printed number so than, be able to
 * calculate the need of spaces or zeros to complete.
 *
 */
int		define_undec_bonus(t_ull lnum, t_config *config);

/**
 * @brief Configures and prints an integer
 *
 * @param num Number to be printed
 * @param config Struct that contains information of the flags
 * @return The number of characters printed
 *
 * @details
 * Calls `process_signals` function that will configure the signals that
 * will be used in case of presence of the correspondig flag;
 * Consider if width is bigger than the number of printed characters
 * and prints spaces before or after the argument to complete the size of width;
 * Calls `process_num` function that will be print the number in decimal base;
 * The function calculates the size of printed number so than, be able to
 * calculate the need of spaces or zeros to complete.
 */
int		define_num_bonus(long long num, t_config *config);

/**
 * @brief If the flag `0` is present, calculates and prints the necessaries `0`
 *
 * @param lnum Unsigned long long number to be printed
 * @param config Struct that contains information of the flags
 * @param base Base size
 * @param mode Define if function will `COUNT` how many
 * characters will be printed or `PRINT` them
 * @return The number of characters printed
 *
 * @details
 * Considers the precision of the specifier, so it can be complete with `0`
 */
int		process_zeros_bonus(t_ull lnum, t_config *config, int base, int mode);

/**
 * @brief Counts or prints the characters of the number
 *
 * @param lnum Unsigned long long number to be printed
 * @param mode Define if function will `COUNT` how many
 * characters will be printed or `PRINT` them
 * @return The number of characters printed
 */
int		process_num_bonus(t_ull lnum, int mode);

/**
 * @brief Prints the necessaries `spaces` before the argument itself
 *
 * @param config Struct that contains information of the flags
 * @param count The number of characters of the integer, considering the `0`,
 * if necessary, will be printed
 * @return The number of characters printed
 */
int		prefix_padding(t_config *config, int count);

/**
 * @brief Prints the necessaries `spaces` after the argument itself
 *
 * @param config Struct that contains information of the flags
 * @param count The number of characters of the integer, considering the `0`,
 * if necessary, will be printed
 * @return The number of characters printed
 */
int		suffix_padding(t_config *config, int count);

/**
 * @brief Defines the width and precision determined in the specifier
 *
 * @param str A pointer to the string (first argument) of ft_printf
 * @return The size of width or precision
 */
int		parse_number(const char **str);

/**
 * @brief
 *
 * @param num Number to be printed
 * @param base Base size
 * @return Size of the number that will be printed
 */
int		num_len(long long num, unsigned int base);

/**
 * @brief Search for any of the flags in the specifier
 *
 * @param c Character of the string (first argument of ft_printf)
 * @param tofind Flags to be searched for
 * @return `True` or `False`
 */
int		ft_findchr(char c, char *tofind);

/**
 * @brief Prints a string
 *
 * @param str The argument (string)
 * @return The number of characters printed
 */
int		ft_putstr(char *s);

/**
 * @brief Prints or calculate the size of a character
 *
 * @param c The argument (character)
 * @param rep Number of times that the character will bem printed
 * @param mode Define if function will `COUNT` how many
 * characters will be printed or `PRINT` them
 * @return The number of characters printed
 */
int		ft_putnchar(char c, int rep, int mode);

/**
 * @brief Calculates the size of a string
 *
 * @param s String to be measured
 * @return The number of characters of the string
 */
int		ft_strlen(const char *s);

#endif
