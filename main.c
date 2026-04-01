/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 17:35:51 by rayan             #+#    #+#             */
/*   Updated: 2026/04/01 17:13:10 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	a = parse_arguments(argc, argv);
	if (!a)
		return (1);
	if (!is_sorted(a))
	{
		size = stack_size(a);
		if (size == 2)
			sort_two(&a);
		else if (size == 3)
			sort_three(&a);
		else if (size <= 5)
			sort_four_or_five(&a, &b);
		else if (size > 5)
			sort_big(&a, &b);
	}
	free_stack(a);
	return (0);
}
