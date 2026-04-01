/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:06:32 by rayan             #+#    #+#             */
/*   Updated: 2026/04/01 17:05:21 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*last;

	if (!stack || !*stack || !(*stack)-> next)
		return ;
	last = *stack;
	while (last -> next)
		last = last -> next;
	if (last -> previous)
		last -> previous -> next = NULL;
	last -> next = *stack;
	last -> previous = NULL;
	*stack = last;
}

void	rra(t_node **a)
{
	if (!a || !*a || !(*a)-> next)
		return ;
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	if (!b || !*b || !(*b)-> next)
		return ;
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	int	do_reverse_rotate;

	do_reverse_rotate = 0;
	if (a && *a && (*a)-> next)
	{
		reverse_rotate(a);
		do_reverse_rotate = 1;
	}
	if (b && *b && (*b)-> next)
	{
		reverse_rotate(b);
		do_reverse_rotate = 1;
	}
	if (do_reverse_rotate == 1)
		write(1, "rrr\n", 4);
}
