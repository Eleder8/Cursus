#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(NULL)"));
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	printed_chars;

	printed_chars = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		printed_char += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		printed_chars += ft_putnbr(n / 10);
	printed_chars += ft_putchar((n % 10) + '0');
	return (printed_chars);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	printed_chars;

	printed_chars = 0;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
	if (format[i] == '%' && format[i + 1] == 'c')
		printed_chars += ft_putchar(va_arg(args, int));
	else if (format[i] == '%' && format[i + 1] == 's')
		printed_chars += ft_putstr(va_arg(args, char *));
	else if (format[i] == '%' && (format [i + 1] == 'd' || format[i + 1] == 'i'))
		printed_chars += ft_putnbr(va_arg(args, int));
	else
		printed_chars += ft_putchar(format[i]);
	i++;
	}
	va_end(args);
	return (printed_chars);
}
