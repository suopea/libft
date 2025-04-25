/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:30:51 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/25 19:44:29 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set) // TODO maybe refactor, you can use substr
{
	int		start;
	int		pos;
	int		ahead;
	char	*out;

	start = 0;
	pos = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	out = ft_calloc(ft_strlen((char *)s1) - start + 1, 1); // TODO maybe don't waste memory
	if (!out)
		return (0);
	while (s1[start + pos])
	{
		ahead = 0;
		while (ft_strchr(set, s1[start + pos + ahead]))
		{
			if (s1[start + pos + ahead] == 0)
				return (out);
			ahead++;
		}
		out[pos] = s1[start + pos];
		pos++;
	}
	return (out);
}
