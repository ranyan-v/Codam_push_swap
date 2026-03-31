/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:46:48 by rayan             #+#    #+#             */
/*   Updated: 2026/03/31 15:35:05 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

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

