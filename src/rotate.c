/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:23:57 by rayan             #+#    #+#             */
/*   Updated: 2026/03/24 18:07:56 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || !*stack || !(*stack)-> next)
		return ;
	first = *stack;
	last = first;
	while (last -> next)
		last = last -> next;
	*stack = first -> next;
	(*stack)-> previous = NULL;
	last -> next = first;
	first -> previous = last;
	first -> next = NULL;
}

void	ra(t_node **a)
{
	if (!a || !*a || !(*a)-> next)
		return ;
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	if (!b || !*b || !(*b)-> next)
		return ;
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	int	do_rotate;

	do_rotate = 0;
	if (a && *a && (*a)-> next)
	{
		rotate(a);
		do_rotate = 1;
	}
	if (b && *b && (*b)-> next)
	{
		rotate(b);
		do_rotate = 1;
	}
	if (do_rotate == 1)
		write(1, "rr\n", 3);
}
