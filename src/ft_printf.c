#include "ft_handler.h"
#include <stdlib.h>

int	ft_printf(const char *format, ...)
{
	va_list	list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	return (ft_handler(format, list));
}
