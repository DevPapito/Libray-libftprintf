/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 01:53:46 by pezio             #+#    #+#             */
/*   Updated: 2026/05/28 20:31:31 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*pointer;
	size_t			total_size;

	total_size = size * nmemb;
	if (nmemb != 0 && size > total_size / nmemb)
		return (NULL);
	pointer = malloc(total_size);
	if (pointer == NULL)
		return (NULL);
	ft_memset(pointer, 0, total_size);
	return (pointer);
}
