/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_and_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 15:31:43 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/07 16:43:34 by dabdulla         ###   ########.fr       */
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

void	store_stack(t_stack *stack, int ac, char const **args)
{
	int		i;
	int		*arr;
	t_stack	*head;

	i = 0;
	head = stack;
	arr = store_array(ac, args);
	if (!arr)
		return ;
	while (i < ac)
	{
		stack->value = arr[i];
		if (i + 1 < ac)
		{
			stack->next = ft_calloc(1, sizeof(t_stack));
			if (!stack->next)
				return (free(arr));
			stack = stack->next;
		}
		i++;
	}
	sort_array(ac, arr);
	sort_stack_index(head, arr, ac);
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
