/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:12:45 by pezio             #+#    #+#             */
/*   Updated: 2026/05/28 22:55:18 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	const char		*pointer;
	unsigned char	character;

	if (s == NULL || c == '\0')
	{
		i = ft_strlen(s);
		return ((char *)&s[i]);
	}
	character = (unsigned char)c;
	i = 0;
	pointer = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == character)
			pointer = &s[i];
		i++;
	}
	if (pointer == NULL)
		return (NULL);
	return ((char *)pointer);
}
