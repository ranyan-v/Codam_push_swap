/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:01:48 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 17:50:08 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Appends a string to the end of another string, 
 * 			respecting the total buffer size and ensuring null-termination.
 * 
 * @param dest - Destination string buffer (must already be null-terminated).
 * @param src - Source string to append.
 * @param size - Total size of the destination buffer.
 * @return size_t - The length of the string it tried to create:
 * 					if destlen ≥ size: return(size + src_len).
 * 					if destlen < size: return(dst_len + src_len).
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while (i + dest_len < size - 1 && src[i])
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest_len + src_len);
}
