/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:42:23 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/30 15:28:37 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	fills the first n bytes of the memory area 
	pointed to by s with byte c
	returns a pointer to memory area s
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
