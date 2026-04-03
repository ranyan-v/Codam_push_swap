/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 19:45:26 by rayan             #+#    #+#             */
/*   Updated: 2026/04/02 19:35:40 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//1 = success
//0 = error
int	check_nbr(char *box)
{
	int	i;

	if (!box || !box[0]) //NULL pointer or empty string
		return (0);
	i = 0;
	if (box[0] == '+' || box[0] == '-')
		i++;
	if (!box[i]) //not single - or +
		return (0);
	while (box[i])
	{
		if ((box[i]) < '0' || (box[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

//0 = error
long	safe_atoi(char *str, int *error)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	*error = 0;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i])
	{
		if (nbr > ((LONG_MAX - (str[i] - '0')) / 10)) //catch overflow for type long "nbr * 10 + digit <= LONG_MAX"
		{
			*error = 1;
			return (0);
		}
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}

//1 = find duplicate
//0 = pass
int	check_duplicate(t_node *stack, int nbr)
{
	t_node	*current;

	current = stack;
	while (current)
	{
		if (current -> value == nbr)
			return (1);
		current = current -> next;
	}
	return (0);
}

void	add_node(t_node **stack, int nbr)
{
	t_node	*new_node;
	t_node	*current;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		error_exit(NULL, *stack);
	new_node -> value = nbr;
	new_node -> next = NULL;
	new_node -> previous = NULL;
	if (!*stack)
	{
		*stack = new_node;
		return ;
	}
	current = *stack;
	while (current -> next)
		current = current -> next;
	current -> next = new_node;
	new_node -> previous = current;
}

void	check_input(char **box, t_node **stack)
{
	int		i;
	long	nbr;
	int		error;

	i = 0;
	error = 0;
	while (box[i])
	{
		// 1. Check valid numeric format
		if (!check_nbr(box[i]))
			error_exit(box, *stack);
		// 2. Convert safely to long
		nbr = safe_atoi(box[i], &error);
		if (error)
			error_exit(box, *stack);
		// 3. Check int range
		if (nbr < INT_MIN || nbr > INT_MAX)
			error_exit(box, *stack);
		// 4. Check duplicates against existing stack
		if (check_duplicate(*stack, (int)nbr))
			error_exit(box, *stack);
		// 5. Add to stack
		add_node(stack, (int)nbr);
		i++;
	}
}
