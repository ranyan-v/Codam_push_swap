/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:59:30 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 16:17:43 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Creates a substring from the given string,
 * 			starting at start and up to len characters.
 * 
 * @param s - The original string.
 * @param start - Starting index of the substring.
 * @param len - Maximum length of the substring.
 * @return char* - A newly allocated substring,
 * 					or NULL if memory allocation fails.
 * 					If start is beyond the end of the string,
 * 					returns an empty string.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if ((s_len - start) < len)
		len = s_len - start;
	sub = (char *)malloc(len +1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
