/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 14:10:34 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/06 15:40:50 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digits(char const *arg)
{
	int	i;

	i = 0;
	if ((arg[i] == '-' || arg[i] == '+') && (arg[i + 1]))
		i++;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_input(int ac, char const **args)
{
	int i;

	i = 0;
    args++;
	if (ac < 2)
		return (0);
	while (args[i])
	{
		if (!check_digits(args[i]))
			return (ft_printf("Error\n"), 0);
		i++;
	}
	return (1);
}