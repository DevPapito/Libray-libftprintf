/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:24:00 by pezio             #+#    #+#             */
/*   Updated: 2026/05/31 14:29:17 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	string_length;
	char	*substring;

	if (s == NULL)
		return (NULL);
	string_length = ft_strlen(s);
	if (start >= string_length)
		return (ft_calloc(1, sizeof(char)));
	if (len > string_length - start)
		len = string_length - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
