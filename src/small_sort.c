/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:38:57 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/10 13:41:35 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_value(t_stack *stack);
static int	get_min_pos(t_stack *stack);
static void	min_to_top(t_stack **stack_a);
static void	sort_three(t_stack **stack_a);

static int	get_max_value(t_stack *stack)
{
	int	i;

	i = stack->value;
	while (stack)
	{
		if (i < stack->value)
			i = stack->value;
		stack = stack->next;
	}
	return (i);
}

static int	get_min_pos(t_stack *stack)
{
	int	min_index;
	int	min_pos;
	int	current_pos;

	min_index = stack->index;
	current_pos = 0;
	min_pos = 0;
	while (stack)
	{
		if (stack->index < min_index)
		{
			min_index = stack->index;
			min_pos = current_pos;
		}
		stack = stack->next;
		current_pos++;
	}
	return (min_pos);
}

static void	min_to_top(t_stack **stack_a)
{
	int	pos;
	int	size;

	pos = get_min_pos(*stack_a);
	size = get_stack_size(*stack_a);
	if (pos <= size / 2)
	{
		while (pos > 0)
		{
			ra(stack_a);
			pos--;
		}
	}
	else
	{
		while (pos < size)
		{
			rra(stack_a);
			pos++;
		}
	}
}

static void	sort_three(t_stack **stack_a)
{
	int	max;

	max = get_max_value(*stack_a);
	if ((*stack_a)->value == max)
		ra(stack_a);
	else if ((*stack_a)->next->value == max)
		rra(stack_a);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

void	small_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = get_stack_size(*stack_a);
	while (size > 3)
	{
		min_to_top(stack_a);
		pb(stack_a, stack_b);
		size--;
	}
	sort_three(stack_a);
	while ((*stack_b))
		pa(stack_a, stack_b);
}
