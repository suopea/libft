/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:32:08 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/25 19:18:22 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return a pointer to the first occurrence of char c in string s
	return 0 if not found
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (unsigned char) c;
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)s + i);
	return (0);
}
