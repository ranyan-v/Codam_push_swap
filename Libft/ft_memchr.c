/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:54:14 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 17:57:05 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Searches for the first occurrence of a specified byte 
 * 			in a block of memory.
 * 
 * @param str - Pointer to the memory area to search.
 * @param c - The byte value to search for (converted to unsigned char).
 * @param n - Number of bytes to examine.
 * @return void* - Pointer to the first occurrence of the byte,
 * 					or NULL if not found within n bytes.
 */
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
