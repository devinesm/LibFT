/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:06:29 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/16 17:12:01 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int value, size_t length)
{
	size_t	index;

	index = 0;
	while (index < length)
	{
		((unsigned char *)str)[index] = (unsigned char)value;
		index++;
	}
	return (str);
}
