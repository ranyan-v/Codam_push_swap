/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:34:43 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 17:39:18 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_putstr(char *str, int len, long nbr)
{
	int		i;

	str[len] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	if (nbr == 0)
		str[0] = '0';
	i = 0;
	while (nbr > 0)
	{
		str[len - 1 - i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	return (str);
}

/**
 * @brief - Converts an integer into a newly allocated string representation.
 * 
 * @param n - The integer to convert.
 * @return char* - A newly allocated string representing the integer,
 * 					or NULL if allocation fails.
 */
char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*str;

	nbr = n;
	if (n > 0)
		len = 0;
	else
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_itoa_putstr(str, len, nbr);
	return (str);
}
