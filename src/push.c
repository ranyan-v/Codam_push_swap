/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:31:13 by rayan             #+#    #+#             */
/*   Updated: 2026/03/31 17:21:08 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

void	push(t_node **src, t_node **dest)
{
	t_node	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = tmp -> next;
	if (*src)
		(*src)-> previous = NULL;
	tmp -> next = *dest;
	if (*dest)
		(*dest)-> previous = tmp;
	tmp -> previous = NULL;
	*dest = tmp;
}

void	pa(t_node **a, t_node **b)
{
	if (!b || !*b)
		return ;
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_node **a, t_node **b)
{
	if (!a || !*a)
		return ;
	push(a, b);
	write(1, "pb\n", 3);
}
