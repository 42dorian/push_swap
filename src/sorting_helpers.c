/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 11:46:52 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/11 11:46:58 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicates(int *arr, int ac)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		if (arr[i] == arr[i + 1])
			return (TRUE);
		i++;
	}
	return (FALSE);
}

int	is_sorted(int *arr, int ac)
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 1;
	while (i < ac - 1)
	{
		if (arr[i] > arr[i + 1])
			sorted = 0;
		i++;
	}
	return (sorted);
}
