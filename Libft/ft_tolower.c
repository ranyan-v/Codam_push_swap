/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:26:56 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 17:52:29 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Converts an uppercase letter to its lowercase equivalent.
 * 
 * @param c - The character to convert.
 * @return int - The lowercase equivalent of c if it is an uppercase letter,
 * 				otherwise returns c unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c = c + 32);
	return (c);
}
