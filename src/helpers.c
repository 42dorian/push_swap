/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 14:10:34 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/07 12:30:01 by dabdulla         ###   ########.fr       */
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
			return (false);
		if (ft_atol(arg) > INT_MAX || ft_atol(arg) < INT_MIN)
			return (false);
		i++;
	}
	return (true);
}

int	check_input(int ac, char const **args)
{
	int i;

	i = 0;
	if (ac < 2)
		return (0);
	while (args[i])
	{
		if (!check_digits(args[i]))
			return (ft_printf("Error\n"), false);
		i++;
	}
	return (true);
}

long	ft_atol(const char *nptr)
{
	int			i;
	int			sign;
	long int	value;

	value = 0;
	i = 0;
	sign = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = sign * -1;
		i++;
		if (nptr[i] == '+')
			return (0);
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		value = value * 10 + nptr[i] - 48;
		i++;
	}
	return (value * sign);
}