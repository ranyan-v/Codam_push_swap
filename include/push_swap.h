/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 19:31:21 by rayan             #+#    #+#             */
/*   Updated: 2026/04/02 19:40:50 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include "../Libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*previous;
}					t_node;

//push_swap
t_node	*parse_arguments(int argc, char **argv);

//normalize_input
int		total_input(int argc, char **argv);
int		fill_box(char **box, char *input, int j);
char	**normalize_input(int argc, char **argv);

//input_check + stack_building
int		check_nbr(char *box);
long	safe_atoi(char *str, int *error);
int		check_duplicate(t_node *stack, int nbr);
void	add_node(t_node **stack, int nbr);
void	check_input(char **box, t_node **stack);

//utils
void	assign_index(t_node *stack);
int		is_sorted(t_node *stack);
void	error_exit(char**box, t_node *stack);
void	free_box(char **box);
void	free_stack(t_node *stack);

//stack utils
int		stack_size(t_node *stack);
t_node	*find_min(t_node *stack);
t_node	*find_max(t_node *stack);
int		node_position(t_node *stack, t_node *node);

//operations
///swap
void	swap(t_node **stack);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);

///push
void	push(t_node **src, t_node **dest);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);

///rotate
void	rotate(t_node **stack);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

///reverse rotate
void	reverse_rotate(t_node **stack);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

///sort small
void	sort_two(t_node **a);
void	sort_three(t_node **a);
void	to_top(t_node **a);
void	sort_four_or_five(t_node **a, t_node **b);

//sort big
///cheapest move
int		rotation_cost(int position, int size);
t_node	*cheapest_move(t_node *a, int chunk_start, int chunk_end);

///solver
void	to_a_top(t_node **a, t_node *target);
void	max_to_b_top(t_node **b);
void	fill_b(t_node **a, t_node **b, int size, int range);
void	sort_big(t_node **a, t_node **b);
#endif
