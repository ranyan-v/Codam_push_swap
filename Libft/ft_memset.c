/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:12:20 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 14:47:07 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Fills a block of memory with a specified byte value.
 * 
 * @param str - Pointer to the memory area to be filled.
 * @param c - The value (converted to an unsigned char) to be set.
 * @param n - Number of bytes to fill.
 * @return void* - Pointer to the memory area str.
 */
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (str);
}
