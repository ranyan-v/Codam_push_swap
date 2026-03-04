/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sawp.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:46:33 by rayan             #+#    #+#             */
/*   Updated: 2026/03/04 18:53:23 by rayan            ###   ########.fr       */
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
}	t_node;

//parse_arguments
t_node *parse_arguments(int argc, char **argv);

//normalize_input
void	free_split(char **box);
int		total_input(int argc, char **argv);
int		fill_box(char **box, char *input, int j);
char	**normalize_input(int argc, char **argv);

//input_check
int		check_nbr(char *box);
long	safe_atoi(char *str);
int		check_duplicate(t_node *stack, int nbr);
void	add_node(t_node **stack, int nbr);
void	check_input(char **box, t_node **stack);








#endif

