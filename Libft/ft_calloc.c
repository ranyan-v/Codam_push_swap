/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:24:43 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 16:12:55 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Allocates memory for an array of elements
 * 			and sets all allocated bytes to zero.
 * 
 * @param count - Number of elements to allocate.
 * @param size - Size of each element.
 * @return void* - Pointer to the allocated zero-initialized memory,
 * 				or NULL if allocation fails or if the multiplication overflows.
 */
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	if (size == 0 || count == 0)
		return (malloc(0));
	if (count > (SIZE_MAX / size))
		return (NULL);
	ptr = (unsigned char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return ((void *)ptr);
}
