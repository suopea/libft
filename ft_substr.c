/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:44:57 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/25 19:48:39 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
s: substring source
start: substring position in source
len: max length of substring

return the substring or NULL if alloc fails

Allocates memory using malloc and returns a substring
from the string s. Substring starts at start and has 
a maximum length of len
*/

// TODO what if start is bigger than original string
// TODO check for null?

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;

	out = malloc(len + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = 0;
	return (out);
}
