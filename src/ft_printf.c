#include <stdlib.h>
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		count;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	count = 0;
	return (ft_handler(format, list, count));
}
