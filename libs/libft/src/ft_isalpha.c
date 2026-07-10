/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 19:11:27 by pezio             #+#    #+#             */
/*   Updated: 2026/05/26 19:35:15 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isupper(int c)
{
	if (!(c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}

static	int	ft_islower(int c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

int	ft_isalpha(int c)
{
	if (!(ft_islower(c) || ft_isupper(c)))
		return (0);
	return (1);
}
