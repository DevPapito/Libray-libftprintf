/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:13:50 by pezio             #+#    #+#             */
/*   Updated: 2026/05/26 18:25:04 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;
	char	c;

	nl = (long)n;
	if (nl < 0)
	{
		nl *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nl >= 10)
		ft_putnbr_fd(nl / 10, fd);
	c = nl % 10 + '0';
	ft_putchar_fd(c, fd);
}
