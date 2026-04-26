/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:47:44 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/26 15:24:37 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	long int	index;

	index = (long int)ft_strlen(str);
	while (index >= 0)
	{
		if ((unsigned char)str[index] == (unsigned char)c)
			return ((char *)&str[index]);
		index--;
	}
	return (NULL);
}
