/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:14:34 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/30 15:06:52 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_of_words(const char *s, char c);
static size_t	length_of_word(const char *s, char c);
static void		*free_everything(char **out);

char	**ft_split(char const *s, char c)
{
	size_t	read_pos;
	size_t	word_len;
	size_t	array_index;
	char	**out;

	array_index = 0;
	read_pos = 0;
	out = calloc(number_of_words(s, c) + 1, sizeof(char *));
	if (!out)
		return (NULL);
	while (s[read_pos])
	{
		if (s[read_pos] == c)
			read_pos++;
		else
		{
			word_len = length_of_word(s + read_pos, c);
			out[array_index] = malloc(word_len + 1);
			if (!out[array_index])
				return (free_everything(out));
			ft_strlcpy(out[array_index++], s + read_pos, word_len + 1);
			read_pos += word_len;
		}
	}
	return (out);
}

static size_t	length_of_word(const char *s, char c)
{
	if (ft_strchr(s, c))
		return (ft_strchr(s, c) - s);
	return (ft_strchr(s, 0) - s);
}

static size_t	number_of_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i])
			i++;
		if (s[i])
			i++;
	}
	return (count);
}

static void	*free_everything(char **out)
{
	size_t	i;

	i = 0;
	while (out[i])
	{
		free(out[i]);
		i++;
	}
	free(out);
	return (NULL);
}
