/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:43:34 by pezio             #+#    #+#             */
/*   Updated: 2026/05/31 14:58:28 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	s1_length;
	size_t	s2_length;
	size_t	i;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	new_string = malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new_string[s1_length + i] = s2[i];
		i++;
	}
	new_string[s1_length + s2_length] = '\0';
	return (new_string);
}
