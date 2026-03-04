/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:35:16 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 14:54:25 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Compares two blocks of memory byte-by-byte.
 * 
 * @param str1 - First memory block.
 * @param str2 - Second memory block.
 * @param n - Number of bytes to compare.
 * @return int - An integer less than, equal to, or greater than zero:
 * 			< 0 if s1 is lexicographically smaller than s2
 * 			= 0 if they are equal
 * 			> 0 if s1 is lexicographically greater than s2
 */
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (n > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}
