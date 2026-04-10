/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:42:50 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/10 13:54:26 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (ac <= 6)
		small_sort(&stack_a, &stack_b);
	else
		redix_sort(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (SUCCESS);
}
