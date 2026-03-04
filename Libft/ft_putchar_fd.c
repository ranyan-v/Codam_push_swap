/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:41:41 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 17:42:21 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Writes a single character to a given file descriptor.
 * 
 * @param c - The character to write.
 * @param fd - File descriptor (e.g., 1 for stdout).
 */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
