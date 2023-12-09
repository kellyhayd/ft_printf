
#include "ft_printf_bonus.h"

int	print_plus_sign(long long int num)
{
	int	n;

	n = 0;
	if (num > 0)
		n = ft_putchar_fd('+', 1);
	n += print_dec_int(num);
	return (n);
}

// int	print_space(char c, va_list ap)
// {
// 	int	num;
// 	int	n;

// 	if (c == +)
// 		return (0);
// 	if ()
// }

int	print_hashtag(char c, unsigned int num)
{
	int	n;

	n = 0;
	if (num == 0)
		return (print_hex(num, c));
	if (c == 'x')
		n = ft_putstr_fd("0x", 1);
	else if (c == 'X')
		n = ft_putstr_fd("0X", 1);
	n += print_hex(num, c);
	return (n);
}

int	id_flag_bonus(const char *str, int i, va_list ap)
{
	int	n;

	n = 0;
	if (str[i] == '#')
	{
		i++;
		n = print_hashtag(str[i], va_arg(ap, unsigned int));
	}
	// else if (str[i] == ' ')
	// {
	// 	i++;
	// 	n = print_space(str[i], ap);
	// }
	else if (str[i] == '+')
	{
		i++;
		n = print_plus_sign(va_arg(ap, long long int));
	}
	// if (str[i] == '-')
	// 	n = print_leftjustify();
	// if (str[i] == '0')
	// 	n = print_zero();
	// if (str[i] == '.')
	// 	n = print_point();
	return (n);
}
