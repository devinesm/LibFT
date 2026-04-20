/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:47:44 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/20 14:50:25 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	size_t	index;

	index = ft_strlen(str);
	while (index > 0)
	{
		if (str[index] == (char) character)
			return ((char *)&str[index]);
		index--;
	}
	if ((char) character == str[0])
		return ((char *)&str[0]);
	return (NULL);
}
