/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 18:39:22 by rayan             #+#    #+#             */
/*   Updated: 2026/03/24 18:08:26 by rayan            ###   ########.fr       */
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
