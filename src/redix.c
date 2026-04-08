/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:40:52 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/08 17:05:05 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_stack *stack)
{
	t_stack	*tmp;
	int		max_index;
	int		max_bits;

	tmp = stack;
	max_index = 0;
	max_bits = 0;
	while (tmp)
	{
		if (tmp->index > max_index)
			max_index = tmp->index;
		tmp = tmp->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	redix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	stack_size;
	int	max_bits;
	int	i;
	int	j;

	i = 0;
	stack_size = get_stack_size(stack_a);
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j < stack_size)
		{
			if ((stack_a->index >> 1) & 1)
				ra(&stack_a);
			else
				pb(stack_a, stack_b);
			j++;
			while ((stack_b))
				pa(stack_a, stack_b);
		}
		i++;
	}
}
