/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:22:24 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/30 14:47:47 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	allocates memory for an array of nmemb elements of size bytes each and
	returns a pointer to the allocated memory. The memory is set to zero

	if nmemb or size is 0, then calloc returns NULL or a unique pointer
	value that can be freed 

	if nmemb * size results in overflow, calloc returns an error 
		malloc wouldn't detect this - malloc(nmemb * size)

	on error, returns NULL
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;

	if ((unsigned long long)(nmemb * size) != nmemb * size
		|| !nmemb || !size)
		return (NULL);
	out = malloc(size * nmemb);
	if (!out)
		return (NULL);
	ft_bzero(out, size * nmemb);
	return (out);
}
