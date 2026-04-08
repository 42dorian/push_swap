/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:42:50 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/08 17:33:53 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("Int: %i, Index: %i\n", stack->value, stack->index);
		if (!(stack->prev))
			ft_printf("Prev: (empty)\n");
		else
			ft_printf("Prev: %i\n", stack->prev->value);
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
		return (FAIL);
	store_stack(&stack_a, ac - 1, av + 1);
	print_stack(&stack_a);
	ft_printf("LIST size: %i\n", get_stack_size(&stack_a));
	redix_sort(&stack_a, &stack_b);
	return (SUCCESS);
}
