/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_cost.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 18:39:40 by rayan             #+#    #+#             */
/*   Updated: 2026/04/02 19:34:12 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	rotation_cost(int position, int size)
{
	if (position <= size / 2)
		return (position);
	return (size - position);
}

t_node	*cheapest_move(t_node *a, int chunk_start, int chunk_end)
{
	t_node	*best;
	t_node	*current;
	int		best_cost;
	int		current_cost;
	int		position;

	best = NULL;
	best_cost = stack_size(a) + 1;
	position = 0;
	current = a;
	while (current)
	{
		if (current -> index >= chunk_start && current -> index < chunk_end)
		{
			current_cost = rotation_cost(position, stack_size(a));
			if (current_cost < best_cost)
			{
				best_cost = current_cost;
				best = current;
			}
		}
		current = current -> next;
		position++;
	}
	return (best);
}
