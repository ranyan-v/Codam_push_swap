/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:37:27 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 17:40:55 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Applies a function to each character of a string
 * 			to create a new modified string.
 * 
 * @param s - The input string.
 * @param f - Function applied to each character;
 * 				receives the index and character.
 * @return char* - A newly allocated string resulting from applying the function,
 * 				or NULL if allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		i;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	str = (char *)malloc (len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
