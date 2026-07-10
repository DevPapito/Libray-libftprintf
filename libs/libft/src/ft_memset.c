/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 23:57:45 by pezio             #+#    #+#             */
/*   Updated: 2026/05/28 03:04:05 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	character;
	unsigned char	*pool;

	character = (unsigned char)c;
	pool = s;
	i = 0;
	while (i < n)
	{
		pool[i] = character;
		i++;
	}
	return (pool);
}
