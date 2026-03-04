/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:31:30 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 17:49:58 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - to check if c belongs to set
 * 
 * @param c 
 * @param set 
 * @return int - 0 or 1:
 * 				1 = c is in set
 * 				0 = c is not in set
 */
int	ft_inset(char c, char const	*set)
{
	int	n;

	n = 0;
	while (set[n])
	{
		if (set[n] == c)
			return (1);
		n++;
	}
	return (0);
}

/**
 * @brief - Removes all leading and trailing characters from a string
 * 			that are present in set.
 * 
 * @param s1 - The string to be trimmed.
 * @param set - Set of characters to trim.
 * @return char* - A newly allocated trimmed string,
 * 					or NULL if allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		start;
	int		end;
	char	*str;

	s1_len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_inset(s1[start], set) == 1)
		start++;
	end = s1_len;
	while (end > start && ft_inset(s1[end -1], set) == 1)
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
