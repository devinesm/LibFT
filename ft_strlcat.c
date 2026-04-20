/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:57:32 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/20 11:43:33 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	index;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	index = dest_len;
	while (src[index - dest_len] && index < size - 1)
	{
		dest[index] = src[index - dest_len];
		index++;
	}
	dest[index] = '\0';
	return (dest_len + src_len);
}
