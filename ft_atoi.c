/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:19:14 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/20 19:34:29 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	long	result;

	index = 0;
	sign = 1;
	result = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return ((int) result * sign);
}
