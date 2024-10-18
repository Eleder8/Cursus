#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*"Para los argumentos variádicos"*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_puthex(unsigned int num, int uppercase);

#endif
