/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:26:45 by rayan             #+#    #+#             */
/*   Updated: 2026/03/24 18:11:49 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

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

void	error_exit(char**box, t_node *stack)
{
	if (box)
		free_split(box);
	if (stack)
		free_stack(stack);
	write(2, "ERROR\n", 6);
	exit("EXIT_FALURE");
}

void	free_split(char **box)
{
	int	i;

	i = 0;
	while (box[i])
	{
		free(box[i]);
		i++;
	}
	free(box);
}

void	free_stack(t_node *stack)
{
	t_node	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack -> next;
		free(tmp);
	}
}
