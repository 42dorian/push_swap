/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:42:50 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/07 12:50:34 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char const *av[])
{
	int	*arr;

	if (!check_input(ac, av + 1))
		return (fail);
	arr = store_array(ac - 1, av + 1);
	if (!arr)
		return (ft_printf("Error\n"), fail);
	return (free(arr), success);
}
