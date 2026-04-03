/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:42:31 by rayan             #+#    #+#             */
/*   Updated: 2026/04/02 19:34:35 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || !(*stack) || !(*stack)-> next)
		return ;
	first = *stack;
	second = first -> next;
	first -> next = second -> next;
	if (second -> next)
		second -> next -> previous = first;
	second -> next = first;
	second -> previous = NULL;
	first -> previous = second;
	*stack = second;
}

void	sa(t_node **a)
{
	if (!a || !*a || !(*a)-> next)
		return ;
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	if (!b || !*b || !(*b)-> next)
		return ;
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	int	do_swap;

	do_swap = 0;
	if (a && *a && (*a)-> next)
	{
		swap(a);
		do_swap = 1;
	}
	if (b && *b && (*b)-> next)
	{
		swap(b);
		do_swap = 1;
	}
	if (do_swap == 1)
		write(1, "ss\n", 3);
}
