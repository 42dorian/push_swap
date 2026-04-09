/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:42:50 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/09 17:31:48 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("Int: %i, Index: %i\n", stack->value, stack->index);
		// if (!(stack->prev))
		// 	ft_printf("Prev: (empty)\n");
		// else
		// 	ft_printf("Prev: %i\n", stack->prev->value);
		stack = stack->next;
	}
}

int	main(int ac, char const *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (FAIL);
	if (!check_input(av + 1))
		return (FAIL);
	if (!store_stack(&stack_a, ac - 1, av + 1))
		return (FAIL);
	print_stack(stack_a);
	if (ac < 7)
		small_sort(&stack_a);
	else	
		redix_sort(&stack_a, &stack_b);
	print_stack(stack_a);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (SUCCESS);
}
