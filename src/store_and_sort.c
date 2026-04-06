/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_and_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 15:31:43 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/06 16:17:41 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *store_array(int ac, char const **args)
{
    int *arr;
    int i;

    i = 0;
    args++;
    arr = malloc(sizeof(int) * ac - 1);
    if (!arr)
        return (0);
    while (args[i])
    {
        arr[i] = ft_atoi(args[i]);
        i++;
    }
    i = 0;
    while (i < ac - 1)
    {
        ft_printf("Int: %i\n", arr[i]);
        i++;
    }
    return (arr);
}

t_list store_stack(char const **args)
{
    
}