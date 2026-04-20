/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:43:43 by ipinto-m          #+#    #+#             */
/*   Updated: 2026/04/20 20:00:51 by ipinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

/*
 * size_t usage - variable to count things in memory
 * malloc usage - function used for dynamic memory allocation
 */
# include <stdlib.h>

/*
 * <ctype.h> functions
*/

/*
 * ft_is...
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

/*
 * ft_to...
 * return: all lower/upper case
*/
int		ft_toupper(int argument);
int		ft_tolower(int argument);

/**/

/*
 * <string.h>
 */

/*
 * ft_strlen
 * return: size of string
 */
size_t	ft_strlen(const char *str);
/*
 * ft_memset
 * return: return a generic pointer to str
 */
void	*ft_memset(void *str, int value, size_t length);
/*
 * ft_bzero
 * return: return a generic pointer to str
 *
 * obs: ft_memset usage
 */
void	*ft_bzero(void *str, size_t length);
/*
 * ft_memcpy
 * return: return a generic pointer to dest
 */
void	*ft_memcpy(void *dest, const void *src, size_t length);
/*
 * ft_memmove
 * return: return a generic pointer to dest
 *
 * obs: ft_memcpy usage
 */
void	*ft_memmove(void *dest, const void *src, size_t length);
/*
 * ft_strlcpy
 * return: return the src length. 
 *
 * obs: Why the return is the src length?
 * If the returned value is greater or equal to the size,
 * it means that the string didn't fit or has been cutted.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
/*
 * ft_strlcat
 * return: return the total length of the string it tried to creat.
 * */
size_t	ft_strlcat(char *dest, const char *src, size_t size);
/*
 * ft_strchr
 * return: returns the first occurance of the character in the string,
 * also the characther can be '\0'.
 */
char	*ft_strchr(const char *str, int character);
/*
 * ft_strrchr
 * return: returns the last occurance of the character in the string.
 *
 * obs: Protection of size_t -> As size_t does not accept negative numbers,
 * if it was while (index >= 0), when index--, it would turn negative.
 */
char	*ft_strrchr(const char *str, int character);
/*
 * ft_strncmp
 * return: if s1 and s2 are equal, it returns 0.
 * otherwise it returns the ascii difference between them
 */
int		ft_strncmp(const char *s1, const char *s2, size_t size);
/*
 * ft_memchr
 * return: returns a specific byte in a memory block, regardless of
 * what's inside (can be text, numbers, e.g.).
 */
void	*ft_memchr(const void *ptr, int value, size_t length);
/*
 * ft_memcmp.c
 * return: returns the difference between two pieces of memory at a specific byte
 */
int	ft_memcmp(const void *s1, const void *s2, size_t size);
/*
 * ft_strnstr
 * return: returns haystack if needle is empty or returns the pointer to the beggining
 * of the word in the haystack
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/*
 * ft_strdup
 * return: it creates a space for the memory and allocates with the copy str
 */
char	*ft_strdup(const char *s1);

/**/

/*
 * <stdlib.h>
*/

/*
 * ft_atoi
 * return: returns the interger of a given string(ascii)
 *
 * obs: use of long to prevent overflow
 */
int	ft_atoi(const char *str);
/*
 * ft_calloc
 * return: reserves a piece of memory and fill it with zeros.
 * after that, returns the memory
 */
void	*ft_calloc(size_t len, size_t size);
int		main(int argc, char **argv);
#endif
