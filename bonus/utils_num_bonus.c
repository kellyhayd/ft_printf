
#include "ft_printf_bonus.h"

int	parse_number(const char **str)
{
	int	number;

	number = 0;
	while (**str >= '0' && **str <= '9')
	{
		number = number * 10 + (**str - '0');
		(*str)++;
	}
	return (number);
}

int	num_len(long long num, unsigned int base)
{
	int	len;

	len = 0;
	if (num == 0)
		len  = 1;
	while (num != 0)
	{
		len += 1;
		num /= base;
	}
	return (len);
}

int	prefix_padding(t_config *config, int count)
{
	if (!config->flags.minus && config->width > count)
		return (ft_putnchar(' ', config->width - count, PRINT_ONLY));
	return (0);
}

int	suffix_padding(t_config *config, int count)
{
	if (config->flags.minus && config->width > count)
		return (ft_putnchar(' ', config->width - count, PRINT_ONLY));
	return (0);
}

