/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:08:50 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/25 19:20:26 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
s1: prefix
s2: suffix

Allocates memory and returns a new string,
which is the result of concatenating s1 and s2
*/

char	*ft_strjoin(char const *s1, char const *s2) // TODO leaks
{
	char		*out;
	size_t		s1_len;
	size_t		s2_len;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	out = malloc(s1_len + s2_len + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1, s1_len + 1);
	ft_strlcat(out, s2, s1_len + s2_len + 1);
	out[s1_len + s2_len + 1] = 0;
	return (out);
}
