/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:07:12 by rayan             #+#    #+#             */
/*   Updated: 2026/04/01 18:36:34 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	fill_b(t_node **a, t_node **b, int range)
{
	int		i;

	i = 0;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + range)
		{
			pb(a, b);
			if ((*b)->index < (i + range) / 2)
				rb(b);
			i++;
		}
		else
			ra(a);
	}
}

void	sort_big(t_node **a, t_node **b)
{
	int		size;
	int		range;
	int		position;
	t_node	*max;

	size = stack_size(*a);
	if (size <= 100)
		range = 20;
	else
		range = 45;
	fill_b(a, b, range);
	// B → A
	while (*b)
	{
		max = find_max(*b);
		position = node_position(*b, max);
		if (position <= stack_size(*b) / 2)
			while (*b != max)
				rb(b);
		else
			while (*b != max)
				rrb(b);
		pa(a, b);
	}
}
