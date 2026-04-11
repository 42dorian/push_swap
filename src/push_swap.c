/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dorianabdullahi <dorianabdullahi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:42:50 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/11 08:28:34 by dorianabdul      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char const *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int ret;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (FAIL);
	if (!check_input(av + 1))
		return (FAIL);
	ret = store_stack(&stack_a, ac - 1, av + 1);
	if (ret == 0)
		return (FAIL);
	if (ret == SORTED)
		return (SUCCESS);
	if (ac <= 6)
		small_sort(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (SUCCESS);
}
