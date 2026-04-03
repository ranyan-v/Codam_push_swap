/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 18:26:35 by rayan             #+#    #+#             */
/*   Updated: 2026/04/02 19:43:15 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_two(t_node **a)
{
	int	first;
	int	second;

	if (!a || !*a || !(*a)-> next)
		return ;
	first = (*a)-> value;
	second = (*a)-> next -> value;
	if (first > second)
		sa(a);
}

void	sort_three(t_node **a)
{
	int	first;
	int	second;
	int	third;

	if (!a || !*a || !(*a)-> next || !(*a)-> next -> next)
		return ;
	first = (*a)-> value;
	second = (*a)-> next -> value;
	third = (*a)-> next -> next -> value;
	if (first < second && second > third && first < third) //1 3 2
	{
		sa(a);
		ra(a);
	}
	else if (first > second && second < third && first < third) //2 1 3
		sa(a);
	else if (first < second && second > third && first > third) //2 3 1
		rra(a);
	else if (first > second && second < third && first > third) //3 1 2
		ra(a);
	else if (first > second && second > third) //3 2 1
	{
		sa(a);
		rra(a);
	}
}

void	to_top(t_node **a)
{
	t_node	*min;
	int		position;

	min = find_min(*a);
	position = node_position(*a, min);
	if (position == 0)
		return ;
	else if (position == 1)
		sa(a);
	else if (position == 2)
	{
		ra(a);
		sa(a);
	}
	else if (position == 3)
	{
		rra(a);
		rra(a);
	}
	else if (position == 4)
		rra(a);
}

void	sort_four_or_five(t_node **a, t_node **b)
{
	if (!a || !*a)
		return ;
	if (stack_size(*a) == 5)
	{
		to_top(a);
		pb(a, b);
	}
	to_top(a);
	pb(a, b);
	sort_three(a);
	while (*b)
		pa(a, b);
}
