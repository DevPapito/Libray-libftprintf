/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 03:14:27 by pezio             #+#    #+#             */
/*   Updated: 2026/05/28 04:29:04 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_pointer;
	const unsigned char	*src_pointer;

	dest_pointer = (unsigned char *)dest;
	src_pointer = (const unsigned char *)src;
	if (dest_pointer > src_pointer)
	{
		while (n > 0)
		{
			n--;
			dest_pointer[n] = src_pointer[n];
		}
	}
	else if (dest_pointer < src_pointer)
		return (ft_memcpy(dest, src, n));
	return (dest_pointer);
}
