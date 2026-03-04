/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:09:13 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 16:01:06 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Searches for the first occurrence of a substring (needle)
 * 			within another string (haystack),within the first len characters.
 * 
 * @param haystack - The string to search in.
 * @param needle - The substring to search for.
 * @param len - Maximum number of characters from haystack to examine.
 * @return char* - Pointer to the first occurrence of needle
 * 					within the allowed range,or NULL if not found.
 * 					If needle is an empty string, returns haystack.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && haystack[i + j] && needle[j]
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
