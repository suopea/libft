/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:30:51 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/30 12:06:07 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	assign_range(char *s1, char *set, size_t *start, size_t *out_len);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	out_len;
	char	*out;

	assign_range((char *)s1, (char *)set, &start, &out_len);
	out = malloc(out_len + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1 + start, out_len + 1);
	return (out);
}

void	assign_range(char *s1, char *set, size_t *start, size_t *out_len)
{
	size_t	i;

	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	*start = i;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && *start < i)
		i--;
	*out_len = i + 1 - *start;
}
