/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:05:59 by pezio             #+#    #+#             */
/*   Updated: 2026/05/29 19:06:35 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_pointer;

	if (s == NULL)
		return (NULL);
	new_pointer = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	ft_strlcpy(new_pointer, s, ft_strlen(s) + 1);
	return (new_pointer);
}
