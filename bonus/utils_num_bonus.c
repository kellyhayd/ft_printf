
#include "ft_printf_bonus.h"

int	parse_number(const char **str)
{
	int	number;

	number = 0;
	while (**str >= 0 && **str <= 9)
	{
		number = number * 10 + (**str - '0');
		(*str)++;
	}
	return (number);
}

int	num_len(unsigned long long num, int base)
{
	int	len;

	len = 1;
	while (num >= (unsigned long)base)
	{
		len += 1;
		num /= base;
	}
	return (len);
}