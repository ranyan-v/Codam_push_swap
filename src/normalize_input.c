/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 16:49:30 by rayan             #+#    #+#             */
/*   Updated: 2026/03/10 19:35:49 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void error_exit(t_node *stack, char **box)
{
	
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

int	total_input(int argc, char **argv)
{
	int		i;
	int		j;
	int		total;
	char	**split;

	total = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			error_exit("ERROR");
		j = 0;
		while (split[j])
		{
			total++;
			j++;
		}
		free_split(split);
		i++;
	}
	return (total);
}

int	fill_box(char **box, char *input, int j)
{
	char	**split;
	int		k;

	split = ft_split(input, ' ');
	if (!split)
		error_exit("ERROR");
	k = 0;
	while (split[k])
	{
		box[j] = ft_strdup(split[k]);
		if (!box[j])
			error_exit("ERROR");
		j++;
		k++;
	}
	free_split(split);
	return (j);
}

char	**normalize_input(int argc, char **argv)
{
	int		i;
	int		j;
	char	**box;

	box = malloc(sizeof(char *) * (total_input(argc, argv) + 1));
	if (!box)
		error_exit("ERROR");
	i = 1;
	j = 0;
	while (i < argc)
	{
		j = fill_box(box, argv[i], j);
		i++;
	}
	box[j] = NULL;
	return (box);
}

