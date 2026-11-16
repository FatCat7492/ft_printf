/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luschuma <luschuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:43:21 by luschuma          #+#    #+#             */
/*   Updated: 2026/11/16 13:06:59 by luschuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static int	is_in_set(char c)
{
	const char	*set = "cspdiuxX%";

	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int	triage_center(char type, va_list *args)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_print_char(va_arg(*args, int));
	if (type == '%')
		count += ft_print_char(va_arg(*args, int));
	if (type == 's')
		count += ft_print_string(va_arg(*args, char *));
	if (type == 'p')
		count += ft_print_pointer("0123456789abcdef", va_arg(*args, void *));
	if (type == 'd')
		count += ft_print_decimal(va_arg(*args, int));
	if (type == 'i')
		count += ft_print_decimal(va_arg(*args, int));
	if (type == 'u')
		count += ft_print_unsigned(va_arg(*args, unsigned int));
	if (type == 'x')
		count += ft_print_hex(va_arg(*args, unsigned int), type);
	if (type == 'X')
		count += ft_print_hex(va_arg(*args, unsigned int), type);
	return (count);
}

int	ft_printf(const char *string, ...)
{
	int		count;
	va_list	args;

	va_start(args, string);
	count = 0;
	while (*string)
	{
		if ((*string == '%') && (is_in_set(*(string + 1)) == 1))
		{
			count += triage_center(*(string + 1), &args);
			string++;
		}
		else
		{
			ft_putchar_fd(*string, 1);
			count++;
		}
		string++;
	}
	va_end(args);
	return (count);
}

int main()
{
	// int age = 0;
	char *nom = "Luis";
	// char *nom2 = "Samuel";
	// int age2 = 22;
	printf("PRINTF: ---- Je m'appelle %s et j'ai %i ans\n", nom, INT32_MAX);
	ft_printf("FT_PRINTF: ----Je m'appelle %s et j'ai %i ans\n", nom, INT32_MAX);

	// ft_printf("I'm %i\n", age);
	// printf("%d", ft_printf("Je m'appelle %s", nom));

	return 0;
}
