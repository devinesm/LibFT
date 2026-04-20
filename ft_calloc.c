/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:48:31 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/20 19:51:03 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t len, size_t size)
{
	size_t	total_size;
	void	*memory;

	total_size = len * size;
	memory = malloc(total_size);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, total_size);
	return (memory);
}
