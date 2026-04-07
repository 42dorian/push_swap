/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:42:50 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/07 16:43:36 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("Int: %i, Index: %i\n", stack->value, stack->index);
		stack = stack->next;
	}
}

int	main(int ac, char const *av[])
{
	t_stack	stack_a;
	t_stack	stack_b;

	ft_bzero(&stack_a, sizeof(t_stack));
	ft_bzero(&stack_b, sizeof(t_stack));
	if (!check_input(ac, av + 1))
		return (fail);
	store_stack(&stack_a, ac - 1, av + 1);
	print_stack(&stack_a);
	return (success);
}
