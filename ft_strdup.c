/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:51:03 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/18 20:06:36 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*out;
	int		i;

	out = malloc(ft_strlen((char *)s));
	i = 0;
	while (s[i])
	{
		out[i] = s[i];
		i++;
	}
	return (out);
}
