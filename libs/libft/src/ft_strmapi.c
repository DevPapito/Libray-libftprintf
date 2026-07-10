/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 15:51:09 by pezio             #+#    #+#             */
/*   Updated: 2026/05/31 16:01:11 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*pointer;

	if (s == NULL || f == NULL)
		return (NULL);
	pointer = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		pointer[i] = (*f)(i, s[i]);
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
