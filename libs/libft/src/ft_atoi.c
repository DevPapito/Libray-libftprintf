/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:07:20 by pezio             #+#    #+#             */
/*   Updated: 2026/05/26 22:57:07 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(char c)
{
	if (c != ' ')
		return (0);
	return (1);
}

static	int	ft_istab_character(char c)
{
	if (!(c >= 9 && c <= 13))
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	short	signal;
	long	result;

	i = 0;
	signal = 1;
	result = 0;
	while (ft_isspace(nptr[i]) == 1 || ft_istab_character(nptr[i]) == 1)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
	}
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]) == 1)
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * signal);
}
