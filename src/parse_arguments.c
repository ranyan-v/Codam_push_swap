/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 18:39:22 by rayan             #+#    #+#             */
/*   Updated: 2026/03/04 18:51:34 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node *parse_arguments(int argc, char **argv)
{
	char	**box;
	t_node	*stack;

	stack = NULL;
	box = normalize_input(argc, argv);
	check_input(box, &stack);
	free_box(box);
	return (stack);
}