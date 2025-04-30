/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:23:53 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/30 14:08:37 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	copies up to (size - 1) chars from the 0-terminated string src to dst,
	0-terminating the result

		Unlike strncpy, this takes the full size of the buffer (not just
	the length) and guarantees to NUL-terminate the result (as long as
	size is larger than 0)

		A byte for the NUL should be included in size. src must be 
	NUL-terminated.

		returns the total length of the string it tried to create, meaning
	the length of src. 
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (size == 0 || ft_strlen((char *) src))
		len = 0;
	else
		len = ft_strlen((char *) src);
	i = 0;
	while (i < size - 1 && size > 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (len);
}
