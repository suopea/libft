/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:14:34 by ssuopea           #+#    #+#             */
/*   Updated: 2025/05/01 14:55:45 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		fill_with_words(char **out, char const *s, char c);
static void		*free_everything(char **out);
static size_t	length_of_word(const char *s, char c);
static char		**count_words_and_calloc(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**out;

	if (!s)
		return ((char **)calloc(1, 1));
	out = count_words_and_calloc(s, c);
	if (!out)
		return (NULL);
	fill_with_words(out, s, c);
	return (out);
}

static char	**count_words_and_calloc(char const *s, char c)
{
	int	i;
	int	count;

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
	return ((char **) calloc(count + 1, sizeof(char *)));
}

static void	fill_with_words(char **out, char const *s, char c)
{
	size_t	read_pos;
	size_t	word_len;
	size_t	array_index;
	int		problem;

	array_index = 0;
	read_pos = 0;
	problem = 0;
	while (s[read_pos] && !problem)
	{
		if (s[read_pos] == c)
			read_pos++;
		else
		{
			word_len = length_of_word(s + read_pos, c);
			out[array_index] = ft_substr(s, read_pos, word_len);
			if (!out[array_index++])
			{
				free_everything(out);
				problem++;
			}
			read_pos += word_len;
		}
	}
}

static size_t	length_of_word(const char *s, char c)
{
	if (ft_strchr(s, c))
		return (ft_strchr(s, c) - s);
	return (ft_strchr(s, 0) - s);
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
