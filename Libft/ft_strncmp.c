/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:56:46 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 15:58:03 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Compares two strings lexicographically,
 * 			but only up to a specified number of characters.
 * 
 * @param str1 - First string.
 * @param str2 - Second string.
 * @param n - Maximum number of characters to compare.
 * @return int - An integer less than, equal to, or greater than zero
 * 				depending on the comparison of the first differing characters:
 * 				< 0 if s1 < s2
 * 				= 0 if the first n characters are equal
 * 				> 0 if s1 > s2
 */
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
