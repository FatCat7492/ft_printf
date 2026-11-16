/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_functions_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luschuma <luschuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:57:19 by luis              #+#    #+#             */
/*   Updated: 2026/11/16 13:29:03 by luschuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_string(char *str)
{
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_print_decimal(int number)
{
	int	count;

	if (number == 0)
	{
		ft_putnbr_fd(0, 1);
		return (1);
	}
	count = 0;
	if (number < 0)
		count++;
	ft_putnbr_fd(number, 1);
	while (number != 0)
	{
		count++;
		number /= 10;
	}
	return (count);
}

int	ft_print_unsigned(unsigned int number)
{
	return (ft_putnbr_base("0123456789", number));
	// if (number == UINT_MAX)
	// 	return (ft_putnbr_base("0123456789", number));
	// if (number == 0)
	// {
	// 	ft_putnbr_base("0123456789", 0);
	// 	return (1);
	// }
	// count = 0;
	// ft_putnbr_base("0123456789", number);
	// while (number != 0)
	// {
	// 	count++;
	// 	number /= 10;
	// }
}
