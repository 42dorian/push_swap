/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_and_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 15:31:43 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/07 12:52:02 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *store_array(int ac, char const **args)
{
    int *arr;
    int i;

    i = 0;
    arr = malloc(sizeof(int) * ac);
    if (!arr)
        return (0);
    while (args[i])
    {
        arr[i] = ft_atoi(args[i]);
        i++;
    }
    i = 0;
    // sort_array(ac, arr);
    while (i < ac)
    {
        ft_printf("Int: %i\n", arr[i]);
        i++;
    }
    return (arr);
}

void sort_array(int ac, int *arr)
{
    int i;
    int j;
    int temp;

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

t_list store_stack(char const **args)
{
    int *arr;
}