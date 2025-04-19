/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:55:36 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/19 17:37:07 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	start;

	i = 0;
	start = ft_strlen(dst);
	while (i < size - ft_strlen(dst) - 1 && src[i])
	{
		dst[start + i] = src[i];
		i++;
	}
	dst[start + i] = 0;
	return (start + ft_strlen((char *) src));
}
