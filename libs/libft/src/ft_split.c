/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 16:13:05 by pezio             #+#    #+#             */
/*   Updated: 2026/06/03 16:27:08 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word_seperator(char const *s, char c)
{
	size_t	i;
	size_t	counter;
	int		bool_seperator;

	i = 0;
	counter = 0;
	bool_seperator = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && bool_seperator == 0)
		{
			bool_seperator = 1;
			counter++;
		}
		else if (s[i] == c)
			bool_seperator = 0;
		i++;
	}
	return (counter);
}

static void	ft_clean_matriz(char **matriz, size_t index)
{
	size_t	i;

	i = 0;
	while (i <= index)
	{
		free(matriz[i]);
		i++;
	}
	free(matriz);
}

static int	ft_set_init_i(const char *s, char c, size_t *init, size_t *i)
{
	while (s[*i] != '\0' && s[*i] == c)
		(*i)++;
	if (s[*i] == '\0')
		return (0);
	*init = *i;
	while (s[*i] != '\0' && s[*i] != c)
		(*i)++;
	return (1);
}

static void	ft_makesplit(char const *s, char c, char **matriz, size_t	i)
{
	char	*substring;
	size_t	string_len;
	size_t	j;
	size_t	init;

	j = 0;
	init = 0;
	string_len = 0;
	substring = NULL;
	while (s[i] != '\0')
	{
		if (ft_set_init_i(s, c, &init, &i) == 0)
			break ;
		string_len = i - init + 1;
		substring = malloc(sizeof(char) * string_len);
		if (substring == NULL)
			ft_clean_matriz(matriz, j);
		ft_strlcpy(substring, &s[init], string_len);
		matriz[j] = substring;
		j++;
	}
	matriz[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	number_word;
	char	**matriz;

	if (s == NULL)
		return (NULL);
	number_word = ft_count_word_seperator(s, c);
	matriz = ft_calloc(number_word + 1, sizeof(char *));
	if (matriz == NULL)
		return (NULL);
	ft_makesplit(s, c, matriz, 0);
	return (matriz);
}
