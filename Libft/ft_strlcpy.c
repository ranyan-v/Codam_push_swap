/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:07:14 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 14:58:38 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Copies a string into a destination buffer, 
 * 			ensuring null-termination when the buffer size allows.
 * 
 * @param dest - Destination buffer.
 * @param src - Source string.
 * @param size - Total size of the destination buffer 
 * 					including space for the null terminator.
 * @return size_t - The total length of the string src 
 * 					(not the number of characters copied).
 * 					Useful for detecting truncation.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
