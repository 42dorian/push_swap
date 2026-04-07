/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:42:54 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/07 16:46:47 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../include/ft_printf/ft_printf.h"
# include "../include/libft/libft.h"
# include <limits.h>
# define false 0
# define true 1
# define fail 1
# define success 0

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

int					check_digits(char const *arg);
int					check_input(int ac, char const **args);
int					*store_array(int ac, char const **args);
void				sort_array(int ac, int *arr);
long				ft_atol(const char *nptr);
void				store_stack(t_stack *stack, int ac, char const **args);
void				sort_stack_index(t_stack *stack, int *arr, int ac);

#endif