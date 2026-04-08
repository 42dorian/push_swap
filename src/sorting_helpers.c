/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dorianabdullahi <dorianabdullahi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:26:08 by dorianabdul       #+#    #+#             */
/*   Updated: 2026/04/08 20:29:41 by dorianabdul      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int has_duplicates(int *arr, int ac)
{
    int i;

    i = 0;
    while (i < ac - 1)
    {
        if (arr[i] == arr[i + 1])
            return (1);
        i++;
    }
    return (0);
}

int is_sorted(int *arr, int ac)
{
    int i;
    int sorted;

    i = 0;
    sorted = 1;
    while(i < ac - 1)
    {
        if (arr[i] > arr[i + 1])
            sorted = 0;
        i++;
    }
    return (sorted);
}