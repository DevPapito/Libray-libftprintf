#include "ft_handler.h"
#include <libft.h>

int	ft_handler(const char *format, va_list list)
{
	const char *pformat;
	size_t	i;

	pformat = format;
	i = 0;
	while (pformat[i] != '\0')
	{
		if (pformat[i] != '%')
		{
			ft_putchar_fd(pformat[i], STDOUT_FILENO);
		}
		else
		{
			i++;
			if (pformat[i] == 'c')
			{
				ft_putchar_fd(va_arg(list, int), STDOUT_FILENO);
			}
		}
		i++;
	}
	va_end(list);
	return (0);
}
