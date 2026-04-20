/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:05:13 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/20 16:09:40 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t length)
{
	size_t	index;
	unsigned char	*byte_ptr;
	unsigned char	byte_value;

	index = 0;
	byte_ptr = (unsigned char *)ptr;
	byte_value = (unsigned char)value;
	while (index < length)
	{
		if (byte_ptr[index] == byte_value)
			return ((void *)&byte_ptr[index]);
		index++;
	}
	return (NULL);
}
