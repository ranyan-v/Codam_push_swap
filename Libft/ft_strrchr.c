/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:07:09 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 15:55:28 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Locates the last occurrence of a given character in a string.
 * 
 * @param ptr - The string to search.
 * @param c - The character to find (converted to char).
 * @return char* - Pointer to the last occurrence of the character c,
 * 					or NULL if not found.
 */
char	*ft_strrchr(const char *ptr, int c)
{
	int	i;

	i = 0;
	while (ptr[i])
		i++;
	while (i >= 0)
	{
		if (ptr[i] == (char)c)
			return ((char *)&ptr[i]);
		i--;
	}
	return (NULL);
}
