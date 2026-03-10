/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:26:45 by rayan             #+#    #+#             */
/*   Updated: 2026/03/10 19:35:54 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	assign_index(t_node *stack)
{
	t_node	*current;
	t_node	*compare;
	int		index;

	current = stack;
	while (current)
	{
		index = 0;
		compare = stack;
		while (compare)
		{
			if ((current -> value) > (compare -> value))
				index++;
			compare = compare -> next;
		}
		current -> value = index;
		current = current -> next;
	}
}

int	is_sorted(t_node *stack)
{
	while (stack -> next)
	{
		if ((stack -> value) > (stack -> next -> value))
			return (0);
		stack = stack -> next;
	}
	return (1);
}
