/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:03:55 by pezio             #+#    #+#             */
/*   Updated: 2026/05/28 17:55:42 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		character;
	const unsigned char	*string_pointer;

	string_pointer = (const unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (string_pointer[i] == character)
			return ((void *)&string_pointer[i]);
		i++;
	}
	return (NULL);
}
