/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:01:10 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/20 19:09:42 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	index2;

	if (*needle == '\0')
		return ((char *)haystack);
	index = 0;
	while (haystack[index] != '\0' && index < len)
	{
		index2 = 0;
		while (needle[index2] != '\0'
			&& haystack[index + index2] == needle[index2]
			&& (index + index2) < len)
			index2++;
		if (needle[index2] == '\0')
			return ((char *)(haystack + index));
		index++;
	}
	return (NULL);
}
