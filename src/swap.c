/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:24:15 by rayan             #+#    #+#             */
/*   Updated: 2026/03/20 15:32:58 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || !(*stack) || !(*stack) -> next)
		return;

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
	if (!a || !*a || !(*a) -> next)
		return ;
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	if (!b || !*b || !(*b) -> next)
		return ;
	swap(b);
	write(1, "sa\n", 3);
}

//不需要两个同时满足才执行
void	ss(t_node **a, t_node **b)
{
	int	swap;

	swap = 0;
	if (a && *a && (*a) -> next)
	{
		swap(a);
		swap = 1;
	}
	if (b && *b && (*b) -> next)
	{
		swap(b);
		swap = 1;
	}
	if (swap == 1)
		write(1, "ss\n", 3);
}
