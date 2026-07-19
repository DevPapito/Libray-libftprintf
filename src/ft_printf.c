/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:43:08 by pezio             #+#    #+#             */
/*   Updated: 2026/07/19 14:43:10 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		count;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	count = 0;
	return (ft_handler(format, list, count));
}
