/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:39:48 by rayan             #+#    #+#             */
/*   Updated: 2026/03/31 15:58:14 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

int	stack_size(t_node *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack -> next;
	}
	return (count);
}

t_node	*find_min(t_node *stack)
{
	t_node	*min_node;
	t_node	*current;

	if (!stack)
		return (NULL);
	min_node = stack;
	current = stack -> next;
	while (current)
	{
		if ((min_node -> value) > (current -> value))
			min_node = current;
		current = current -> next;
	}
	return (min_node);
}

t_node	*find_max(t_node *stack)
{
	t_node	*max_node;
	t_node	*current;

	if (!stack)
		return (NULL);
	max_node = stack;
	current = stack -> next;
	while (current)
	{
		if ((max_node -> value) < (current -> value))
			max_node = current;
		current = current -> next;
	}
	return (max_node);
}

t_node	*find_last(t_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack -> next)
		stack = stack -> next;
	return (stack);
}

int	node_position(t_node *stack, t_node *node)
{
	int	position;

	position = 0;
	while (stack)
	{
		if (stack == node)
			return (position);
		stack = stack -> next;
		position++;
	}
	return (-1);
}
