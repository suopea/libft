/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:50:48 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/22 11:45:42 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*revcopy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src == dest)
		return (dest);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	return (revcopy(dest, src, n));
}

static void	*revcopy(void *dest, const void *src, size_t n)
{
	int			i;
	const char	*src_c;
	char		*dest_c;

	src_c = src;
	dest_c = dest;
	i = n;
	while (i >= 0)
	{
		dest_c[i] = src_c[i];
		i--;
	}
	return (dest);
}
