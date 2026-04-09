/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_and_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 15:31:43 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/09 11:21:20 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*store_array(int ac, char const **args)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(sizeof(int) * ac);
	if (!arr)
		return (0);
	while (args[i])
	{
		arr[i] = ft_atoi(args[i]);
		i++;
	}
	return (arr);
}

void	sort_array(int ac, int *arr)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = 0;
	while (i < ac - 1)
	{
		while (j < ac - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

static int	add_node(t_stack **stack, t_stack **tail, int value)
{
	t_stack	*node;

	node = ft_calloc(1, sizeof(t_stack));
	if (!node)
		return (FALSE);
	node->value = value;
	node->prev = *tail;
	if (*tail)
		(*tail)->next = node;
	else
		*stack = node;
	*tail = node;
	return (TRUE);
}

int	store_stack(t_stack **stack, int ac, char const **args)
{
	int		i;
	int		*arr;
	t_stack	*tail;

	arr = store_array(ac, args);
	if (!arr)
		return (FALSE);
	if (is_sorted(arr, ac))
		return(free(arr), FALSE);
	i = 0;
	tail = NULL;
	while (i < ac)
	{
		if (!add_node(stack, &tail, arr[i]))
			return (free(arr), free_stack(stack), FALSE);
		i++;
	}
	sort_array(ac, arr);
	if (has_duplicates(arr, ac))
		return(free(arr), free_stack(stack), FALSE);
	sort_stack_index(*stack, arr, ac);
	return (free(arr), TRUE);
}

void	sort_stack_index(t_stack *stack, int *arr, int ac)
{
	int	i;
	int	*sorted;

	i = 0;
	sorted = ft_calloc(ac, sizeof(int));
	if (!sorted)
		return ;
	while (stack)
	{
		while (i < ac)
		{
			if ((stack->value == arr[i]) && sorted[i] == 0)
			{
				stack->index = i;
				sorted[i] = 1;
				break ;
			}
			i++;
		}
		i = 0;
		stack = stack->next;
	}
	free(sorted);
}
