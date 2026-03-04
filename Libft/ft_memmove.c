/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:09:03 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 14:51:19 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Copies a block of memory from source to destination.
 * 			Safely handles overlapping memory areas by choosing copy direction.
 * 
 * @param dest - Destination memory area.
 * @param src - Source memory area.
 * @param len - Number of bytes to move.
 * @return void* - Pointer to the destination memory area dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	if (!dest && !src)
		return (NULL);
	dptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	if (dptr == sptr || len == 0)
		return (dest);
	if (dptr > sptr)
	{
		while (len > 0)
		{
			len--;
			dptr[len] = sptr[len];
		}
	}
	if (dptr < sptr)
	{
		while (len--)
			*dptr++ = *sptr++;
	}
	return (dest);
}
