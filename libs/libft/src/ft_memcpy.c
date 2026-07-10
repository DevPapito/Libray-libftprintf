/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 02:31:19 by pezio             #+#    #+#             */
/*   Updated: 2026/06/16 18:25:16 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_pointer;
	const unsigned char	*src_pointer;

	dest_pointer = dest;
	src_pointer = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_pointer[i] = src_pointer[i];
		i++;
	}
	return (dest_pointer);
}
