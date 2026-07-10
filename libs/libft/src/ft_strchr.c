/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 21:46:18 by pezio             #+#    #+#             */
/*   Updated: 2026/05/28 22:07:51 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	character;

	if (c == '\0')
	{
		i = ft_strlen(s);
		return ((char *)&s[i]);
	}
	character = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == character)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
