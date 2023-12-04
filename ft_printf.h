
#ifndef FT_PRINTF_H
# define FT_PRINT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

#endif