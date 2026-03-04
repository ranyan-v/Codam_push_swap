/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:44:18 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 17:53:06 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Converts a lowercase letter to its uppercase equivalent.
 * 
 * @param c - The character to convert.
 * @return int - The uppercase equivalent of c if it is a lowercase letter,
 * 				otherwise returns c unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c = c - 32);
	return (c);
}
