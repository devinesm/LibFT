/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:05:13 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/26 15:31:23 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*byte_ptr;
	unsigned char	byte_value;

	index = 0;
	byte_ptr = (unsigned char *)str;
	byte_value = (unsigned char)c;
	while (index < n)
	{
		if (byte_ptr[index] == byte_value)
			return ((void *)&byte_ptr[index]);
		index++;
	}
	return (NULL);
}
