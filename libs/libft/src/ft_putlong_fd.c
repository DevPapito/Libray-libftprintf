/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:42:06 by pezio             #+#    #+#             */
/*   Updated: 2026/07/19 14:42:08 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putlong_fd(long n, int fd)
{
	char	c;
	int		count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
		count++;
	}
	if (n >= 10)
		count += ft_putlong_fd(n / 10, fd);
	c = n % 10 + '0';
	count++;
	ft_putchar_fd(c, fd);
	return (count);
}
