#include "libft.h"

int	ft_print_fd(char c, int fd)
{
	ft_putchar_fd(c, fd);
	return (1);
}

int	ft_printstr_fd(char *s, int fd)
{
	if (s == NULL)
	{
		ft_putstr_fd("(null)", fd);
		return (ft_strlen("(null)"));
	}
	ft_putstr_fd(s, fd);
	return (ft_strlen(s));
}

int	ft_puthex_fd(unsigned long hex, char *base, int fd)
{
	int	count;

	count = 0;
	if (hex >= 16)
		count += ft_puthex_fd(hex / 16, base, fd);
	count += ft_print_fd(base[hex % 16], fd);
	return (count);
}

int	ft_putptr_fd(unsigned long ptr, int fd)
{
	int count;

	if (ptr == 0)
	{
		ft_printstr_fd("(nil)", fd);
		return (ft_strlen("(nil)"));
	}
	count = ft_printstr_fd("0x", fd);
	return ((count + ft_puthex_fd(ptr, "0123456789abcdef", fd)));
}
