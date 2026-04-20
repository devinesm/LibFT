/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:28:46 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/20 14:29:56 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int argument)
{
	if ((argument >= 'A') && (argument <= 'Z'))
		return (argument + 32);
	return (argument);
}
