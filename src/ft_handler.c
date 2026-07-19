#include "libft.h"
#include "ft_printf.h"

static int ft_checker(va_list list, const char *format, size_t i)
{
	char *hex_lower;
	char *hex_upper;

	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (format[i] == 'c')
		return (ft_print_fd(va_arg(list, int), STDOUT_FILENO));
	else if (format[i] == 's')
		return (ft_printstr_fd(va_arg(list, char *), STDOUT_FILENO));
	else if (format[i] == 'd' || format[i] == 'i')
		return (ft_putlong_fd(va_arg(list, int), STDOUT_FILENO));
	else if (format[i] == 'u')
		return (ft_putlong_fd(va_arg(list, unsigned int), STDOUT_FILENO));
	else if (format[i] == 'x')
		return (ft_puthex_fd(va_arg(list, unsigned int), hex_lower, STDOUT_FILENO));
	else if (format[i] == 'X')
		return (ft_puthex_fd(va_arg(list, unsigned int), hex_upper, STDOUT_FILENO));
	else if (format[i] == 'p')
		return (ft_putptr_fd(va_arg(list, unsigned long), STDOUT_FILENO));
	else if (format[i] == '%')
		return (ft_print_fd('%', 1));
	return (-1);
}

int	ft_handler(const char *format, va_list list, int count)
{
	size_t	i;
	int		check;

	i = 0;
	check = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			count += ft_print_fd(format[i], STDOUT_FILENO);
		else
		{
			i++;
			check += ft_checker(list, format, i);
			if (check == -1)
				return (-1);
			else
			{
				count += check;
				check = 0;
			}
		}
		i++;
	}
	va_end(list);
	return (count);
}
