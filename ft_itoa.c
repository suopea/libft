/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:10:13 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/25 13:32:58 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*int_alloc(long int n, int *place);
long	deal_with_sign(long temp, char *out);

char	*ft_itoa(int n)
{
	char	*out;
	int		place;
	int		i;
	long	temp;

	temp = n;
	i = 0;
	place = 1;
	out = int_alloc(n, &place);
	if (!out)
		return (0);
	temp = deal_with_sign(temp, out);
	if (out[0] == '-')
		i++;
	while (place > 1)
	{
		out[i] = (temp / place) + '0';
		temp = temp % place;
		place /= 10;
		i++;
	}
	out[i] = temp + '0';
	out[++i] = 0;
	return (out);
}

long	deal_with_sign(long temp, char *out)
{
	if (temp < 0)
	{
		out[0] = '-';
		temp = -temp;
	}
	return (temp);
}

char	*int_alloc(long int n, int *place)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (*place <= n / 10)
	{
		*place *= 10;
		i++;
	}
	return ((char *)malloc(i + 1));
}
