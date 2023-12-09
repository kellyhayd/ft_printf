
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

int	print_space(const char *str, int i, va_list ap)
{
	int	n;
	int	num;

	num = va_arg(ap, int);
	if (str[i] == '+')
	{
		if (num > 0)
			n = ft_putchar_fd('+', 1) + print_dec_int(va_arg(ap, int));
	}
	else if (str[i] == 'd' || str[i] == 'i')
	{
		if (num < 0)
			n = print_dec_int(va_arg(ap, int));
		else
		{
			n = ft_putchar_fd(' ', 1);
			n += print_dec_int(va_arg(ap, int));
		}	
	}
	else if (str[i] == 's' || (ft_isdigit(str[i] && str[i + 1] == 's')))
	{
		if (!(va_arg(ap, char *)))
			n = ft_putchar_fd(' ', 1);
		else
			print_str(va_arg(ap, char *));
	}
	return (n);
}

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
	else if (str[i] == ' ')
	{
		i++;
		n = print_space(str, i, ap);
	}
	// else if (str[i] == '+')
	// {
	// 	i++;
	// 	n = print_plus_sign(va_arg(ap, long long int));
	// }
	// if (str[i] == '-')
	// 	n = print_leftjustify();
	// if (str[i] == '0')
	// 	n = print_zero();
	// if (str[i] == '.')
	// 	n = print_point();
	return (n);
}
