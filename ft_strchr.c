/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:33:49 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/20 14:45:06 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == (char) character)
			return ((char *)&str[index]);
		index++;
	}
	while ((char) character == '\0')
		return ((char *)&str[index]);
	return (NULL);
}
