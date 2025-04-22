/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:51:28 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/22 15:06:21 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		output;
	int		sign;
	long	temp;
	int		i;

	i = 0;
	temp = 0;
	output = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (isdigit(nptr[i]))
	{
		temp += nptr[i] - '0';
		temp *= 10;
		i++;
	}
	output = temp / 10 * sign;
	return (output);
}
