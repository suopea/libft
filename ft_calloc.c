/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:22:24 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/25 18:33:43 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
how to really test this?
why is output of (0, 10) 10 but (10, 0) is zero for lib function
*/

#include "libft.h"

void*	ft_calloc(size_t nmemb, size_t size)
{
	void	*out;
	size_t	i;

	out = malloc(size * nmemb); // TODO overflow of multiplication
	if (!out)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(char *)(out + i) = 0; // TODO bzero
		i++;
	}
	return (out);
}
