/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luschuma <luschuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:43:21 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/16 14:34:34 by luschuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_in_set(char c)
{
	char	*set = "cspdiuxX%";
	
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_string(char *str)
{
	write(1, str++, 1);
}

void ft_print_decimal()


int	ft_printf(const char *s, ...)
{
	int	count;
	va_list args

	va_start(args, s)
	count = 0;
	while (*s)
	{
		if (*s == "%" && is_in_set(*(s + 1)) == 1)
		{
			s++:
			if (*s == 'c')
				ft_print_char(*s);
			if (*s == 's')
				ft_print_string(*s)
			if (*s == 'p')
				ft_print_pointer(*s)
			if (*s == 'd')
				ft_print_decimal(*s)
			if (*s == 'i')
				ft_print_integer(*s)
			if (*s == 'u')
				ft_print_unsigned(*s)
			if (*s == 'x')
				ft_print_hex_min(*s)
			if (*s == 'X')
				ft_print_hex_max(*s)
			if (*s == '%')
				ft_print_percent(*s)
		}

		write(1, s, 1);
		counter++;
	}

	va_end
}

int	main(void)
{
	
}