/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:04:53 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 15:54:49 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Locates the first occurrence of a given character in a string.
 * 
 * @param ptr - The string to search.
 * @param c - The character to find (converted to char).
 * @return char* - Pointer to the first occurrence of the character c,
 * 					or NULL if not found.
 */
char	*ft_strchr(const char *ptr, int c)
{
	int	i;

	i = 0;
	while (ptr[i] && ptr[i] != (char) c)
		i++;
	if (ptr[i] == (char) c)
		return ((char *)&ptr[i]);
	return (NULL);
}
