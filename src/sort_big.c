/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:07:12 by rayan             #+#    #+#             */
/*   Updated: 2026/04/02 19:34:19 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	to_a_top(t_node **a, t_node *target)
{
	int	position;
	int	size;

	position = node_position(*a, target);
	size = stack_size(*a);
	if (position <= size / 2)
		while (*a != target)
			ra(a);
	else
		while (*a != target)
			rra(a);
}

void	max_to_b_top(t_node **b)
{
	t_node	*max;
	int		position;
	int		size;

	max = find_max(*b);
	position = node_position(*b, max);
	size = stack_size(*b);
	if (position <= size / 2)
		while (*b != max)
			rb(b);
	else
		while (*b != max)
			rrb(b);
}

void	fill_b(t_node **a, t_node **b, int size, int range)
{
	int		chunk_start;
	int		chunk_end;
	int		chunk_mid;
	t_node	*target;

	chunk_start = 0;
	while (chunk_start < size)
	{
		chunk_end = chunk_start + range;
		if (chunk_end > size)
			chunk_end = size;
		chunk_mid = chunk_start + (chunk_end - chunk_start) / 2;
		target = cheapest_move(*a, chunk_start, chunk_end);
		while (target)
		{
			to_a_top(a, target);
			pb(a, b);
			if ((*b)-> index < chunk_mid)
				rb(b);
			target = cheapest_move(*a, chunk_start, chunk_end);
		}
		chunk_start = chunk_start + range;
	}
}

void	sort_big(t_node **a, t_node **b)
{
	int	size;
	int	range;

	size = stack_size(*a);
	if (size <= 100)
		range = 10;
	else
		range = 35;
	fill_b(a, b, size, range);
	while (*b)
	{
		max_to_b_top(b);
		pa(a, b);
	}
}
