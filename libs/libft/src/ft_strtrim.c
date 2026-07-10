/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 15:01:46 by pezio             #+#    #+#             */
/*   Updated: 2026/05/31 15:40:14 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_is_into_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_start(size_t	start, const char *s1, const char *set)
{
	while (s1[start] && ft_is_into_set(s1[start], set))
		start++;
	return (start);
}

static size_t	ft_end(size_t st, const char *s1, const char *set, size_t end)
{
	while (end > st && ft_is_into_set(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new_string;
	ssize_t	start;
	ssize_t	end;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	start = ft_start(start, s1, set);
	end = ft_strlen(s1);
	end = ft_end(start, s1, set, end);
	new_string = malloc(sizeof(char) * (end - start + 1));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		new_string[i] = s1[start];
		start++;
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
