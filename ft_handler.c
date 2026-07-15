#include "ft_handler.h"
#include <libft.h>

// preciso implementar codigos de tratamando de tipos
static size_t	ft_check(va_list list, const char *pf, size_t size, size_t i)
{
	char	*pintermed;

	pintermed = NULL;
	if (pf[i] == 'c')
		ft_putchar_fd(va_arg(list, int), STDOUT_FILENO);
	else if (pf[i] == 's')
	{
		pintermed = va_arg(list, char *);
		if (pintermed == NULL)
		{
			ft_putstr_fd("(null)", STDOUT_FILENO);
			size = (size + ft_strlen("(null)")) - 1;
		}
		else
		{
			ft_putstr_fd(pintermed, STDOUT_FILENO);
			size = (size + ft_strlen(pintermed)) - 1;
		}
	}
	return (size);
}

static size_t	ft_loop(va_list list, const char *pf, size_t size, size_t i)
{
	i = 0;
	size = 0;
	while (pf[i] != '\0')
	{
		// algo das flags acho que fiz merda
		if (pf[i] != '%')
			ft_putchar_fd(pf[i], STDOUT_FILENO);
		else
		{
			i++;
			size = ft_check(list, pf, size, i);
		}
		i++;
		size++;
	}
	return (size);
}

int	ft_handler(const char *format, va_list list)
{
	size_t		i;
	size_t		size;
	size_t		result;
	const char	*pformat;

	pformat = format;
	i = 0;
	size = 0;
	result = ft_loop(list, pformat, size, i);
	va_end(list);
	return (result);
}
