/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:49:00 by luis              #+#    #+#             */
/*   Updated: 2026/11/13 15:24:27 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static int	ft_putnbr_base(char *base, unsigned long number)
{
	unsigned long	nbr;
	int				count;
	unsigned long	base_length;

	base_length = 16;
	count = 0;
	nbr = number;
	if (number == 0)
	{
		ft_putchar_fd('0', 1);
		count++;
		return (count);
	}
	if (nbr < base_length)
	{
		ft_putchar_fd(base[nbr], 1);
		count++;
	}
	else
	{
		count += ft_putnbr_base(base, nbr / base_length);
		count += ft_putnbr_base(base, nbr % base_length);
	}
	return (count);
}

int	ft_print_pointer(char *base, void *pointer)
{
	int	count;

	count = 0;
	if (pointer == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		count += 5;
		return (count);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		count += 2;
		count += ft_putnbr_base(base, (unsigned long)pointer);
	}
	return (count);
}

int	ft_print_hex(unsigned long nbr, char hex)
{
	char	*hex_min;
	char	*hex_maj;
	int		count;

	count = 0;
	hex_min = "0123456789abcdef";
	hex_maj = "0123456789ABCDEF";
	if (hex == 'x')
		count += ft_putnbr_base(hex_min, nbr);
	if (hex == 'X')
		count += ft_putnbr_base(hex_maj, nbr);
	return (count);
}

// int main()
// {
// 	int number = 0;
// 	ft_putnbr_base("0123456789abcdef", number);

// 	printf("\n");

// 	number = 10;
// 	ft_putnbr_base("0123456789abcdef", number);

// 	printf("\n");
// 	number = 16;
// 	ft_putnbr_base("0123456789abcdef", number);

// 	printf("\n");
// 	number = 26;
// 	ft_putnbr_base("0123456789abcdef", number);

// 	printf("\n");
// 	number = 4096;
// 	ft_putnbr_base("0123456789abcdef", number);

// 	printf("\n");
// 	void *ptr;
// 	ptr = &number;
// 	ft_print_pointer("0123456789abcdef", ptr);

// 	printf("\n");
// 	ptr = NULL;
// 	ft_print_pointer("0123456789abcdef", ptr);
// 	return 0;
// }
