/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:43:43 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/16 19:00:49 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

/*
 * size_t usage - variable to count things in memory
 */
# include <stdlib.h>

/*
 * <ctype.h> functions
*/

/*
 * ft_is...
 * parameters: int argument
 * return: 1 if it's | 0 if it's not
 *
 * obs: in the originals functions, 
 * if the argument is validated as true,
 * it will return a number different of 0
 */
int		ft_isalpha(int argument);
int		ft_isdigit(int argument);
int		ft_isalnum(int argument);
int		ft_isascii(int argument);
int		ft_isprint(int argument);

/**/

/*
 * <string.h>
 */

/*
 * ft_strlen
 * parameters: const char *str
 * return: size of string
 */
size_t	ft_strlen(const char *str);
/*
 * ft_memset
 * parameters: void *str, int value, size_t length
 * return: return a generic pointer to str
 */
void	*ft_memset(void *str, int value, size_t length);
/*
 * ft_bzero
 * parameters: void *str, size_t length
 * return: return a generic pointer to str
 *
 * obs: ft_memset usage
 */
void	*ft_bzero(void *str, size_t length);
/*
 * ft_memcpy
 * parameters: void *dest, const void *src, size_t length
 * return: return a generic pointer to dest
 */
void	*ft_memcpy(void *dest, const void *src, size_t length);
/*
 * ft_memmove
 * parameters: void *dest, const void *src, size_t length
 * return: return a generic pointer to dest
 *
 * obs: ft_memcpy usage
 */
void	*ft_memmove(void *dest, const void *src, size_t length);
/*
 * ft_strlcpy
 * parameters: char *dest, const char *src, size_t size)
 * return: return the src length. 
 *
 * obs: Why the return is the src length?
 * If the returned value is greater or equal to the size,
 * it means that the string didn't fit or has been cutted.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		main(int argc, char **argv);
#endif
