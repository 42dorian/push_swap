/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdulla <dabdulla@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:16:06 by dabdulla          #+#    #+#             */
/*   Updated: 2026/04/07 17:36:53 by dabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_args(const char c, va_list *args)
{
	int	count;

	count = 0;
	if (c == 's')
		count += ft_putstr(va_arg(*args, char *));
	else if (c == 'c')
		count += ft_putchar(va_arg(*args, int));
	else if (c == '%')
		count += ft_putchar('%');
	else if (c == 'i' || c == 'd')
		count += ft_putnbr((long)va_arg(*args, int), 10);
	else if (c == 'x')
		count += ft_putnbr(va_arg(*args, unsigned int), 16);
	else if (c == 'X')
		count += ft_putnbr_caps(va_arg(*args, unsigned int), 16);
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			len += handle_args(format[++i], &args);
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// #include <stdio.h>

// int  main(void)
// {
//  int a = -1;
//  int b = 5;
//  ft_printf("FT: A:%i B:%i\n", a, b);
//  printf("A:%i B:%i\n", a, b);
//  return (0);
// }
