/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:42:54 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/10 15:51:17 by dabdulla         ###   ########.fr       */
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
int					check_input(char const **args);
int					*store_array(int ac, char const **args);
void				sort_array(int ac, int *arr);
long				ft_atol(const char *nptr);
int					store_stack(t_stack **stack, int ac, char const **args);
void				sort_stack_index(t_stack *stack, int *arr, int ac);
int					get_stack_size(t_stack *stack);
int					get_max_bits(t_stack *stack);
void				free_stack(t_stack **stack);
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);
void				ra(t_stack **stack);
void				sa(t_stack **stack);
void				rra(t_stack **stack);
void				radix_sort(t_stack **stack_a, t_stack **stack_b);
int					has_duplicates(int *arr, int ac);
int					is_sorted(int *arr, int ac);
void				small_sort(t_stack **stack_a, t_stack **stack_b);
#endif