/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
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
	t_node	*tmp;
	t_node	*new;

	if (!stack && !(*stack) && !(*stack) -> next)
		return;

	tmp = *stack;
	new = tmp -> next;
	tmp -> next = new -> next;
	if 
	
	
}