/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 14:10:34 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/06 13:43:57 by dabdulla         ###   ########.fr       */
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

	i = 1;
	if (ac < 2)
	{
		ft_printf("Error\nAt least one argument required!\n");
		return (0);
	}
	while (args[i])
	{
		if (!check_digits(args[i]))
		{
			ft_printf("Error\nInvalid arguments\n");
			ft_printf("Must only contain digits and 1 + or - before digit\n");
			return (0);
		}
		i++;
	}
	return (1);
}