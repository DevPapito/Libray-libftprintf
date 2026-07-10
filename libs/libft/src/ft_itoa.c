/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:09:54 by pezio             #+#    #+#             */
/*   Updated: 2026/06/03 16:25:16 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_count_chars(int n, int *length)
{
	long	nl;

	(*length)++;
	nl = (long)n;
	if (nl < 0)
	{
		(*length)++;
		nl *= -1;
	}
	if (nl >= 10)
		ft_count_chars(nl / 10, length);
}

static int	ft_verification(long *nl, char *s)
{
	if (*nl < 0)
	{
		*nl *= -1;
		s[0] = '-';
	}
	if (*nl == 0)
	{
		s[0] = '0';
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		length;
	char	c;
	long	nl;

	length = 0;
	nl = (long)n;
	ft_count_chars(n, &length);
	string = malloc(sizeof(char) * length + 1);
	if (string == NULL)
		return (NULL);
	string[length] = '\0';
	if (ft_verification(&nl, string) == 1)
		return (string);
	length -= 1;
	while (length >= 0)
	{
		c = nl % 10 + '0';
		if (nl == 0)
			break ;
		string[length] = c;
		nl /= 10;
		length--;
	}
	return (string);
}
