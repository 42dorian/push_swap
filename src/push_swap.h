/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:42:54 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/07 17:36:37 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../include/ft_printf/ft_printf.h"
# include "../include/libft/libft.h"
# include <limits.h>
# define FALSE 0
# define TRUE 1
# define FAIL 1
# define SUCCESS 0

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
int					stack_size(t_stack *stack);
#endif