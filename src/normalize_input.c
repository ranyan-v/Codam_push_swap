/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 16:49:30 by rayan             #+#    #+#             */
/*   Updated: 2026/03/31 17:18:06 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_sawp.h"

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
			error_exit(NULL, NULL);
		j = 0;
		while (split[j])
		{
			total++;
			j++;
		}
		free_box(split);
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
		error_exit(box, NULL);
	k = 0;
	while (split[k])
	{
		box[j] = ft_strdup(split[k]);
		if (!box[j])
			error_exit(box, NULL);
		j++;
		k++;
	}
	free_box(split);
	return (j);
}

char	**normalize_input(int argc, char **argv)
{
	int		i;
	int		j;
	char	**box;
	int		total;

	total = total_input(argc, argv);
	if (total == 0)
		error_exit(NULL, NULL);
	box = malloc(sizeof(char *) * (total + 1));
	if (!box)
		error_exit(NULL, NULL);
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
