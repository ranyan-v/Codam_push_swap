/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:52:10 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 14:49:43 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Copies a block of memory from source to destination. 
 * 			Does not handle overlapping memory areas.
 * 
 * @param dest - Destination memory area.
 * @param src - Source memory area.
 * @param len - Number of bytes to copy.
 * @return void* - Pointer to the destination memory area dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*dptr;
	unsigned char	*sptr;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	dptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (dest);
}
