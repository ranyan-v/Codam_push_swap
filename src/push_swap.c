/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:46:48 by rayan             #+#    #+#             */
/*   Updated: 2026/04/02 19:33:55 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*parse_arguments(int argc, char **argv)
{
	char	**box;
	t_node	*stack;

	stack = NULL;
	box = normalize_input(argc, argv);
	check_input(box, &stack);
	free_box(box);
	return (stack);
}
