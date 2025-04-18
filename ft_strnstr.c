/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:30:19 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/18 19:33:20 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	start;
	size_t	lil_pos;

	if (!little[0])
		return ((char *) big);
	start = 0;
	len = len - ft_strlen((char *)little);
	while (big[start] && start <= len)
	{
		lil_pos = 0;
		while (little[lil_pos] && little[lil_pos] == big[start + lil_pos])
			lil_pos++;
		if (!little[lil_pos])
			return ((char *)big + start);
		start++;
	}
	return (0);
}
