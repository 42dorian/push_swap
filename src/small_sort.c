/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:38:57 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/09 17:32:49 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sort_three(t_stack **stack_a)
// {

// }

void	small_sort(t_stack **stack_a)
{
    if ((*stack_a)->value > (*stack_a)->next->value)
        sa(&(*stack_a));
}
