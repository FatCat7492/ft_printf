/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:36:37 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/20 13:31:21 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	ft_print_base(char *base, int number)
{
	int	count;

	count = 0;
	while(nbr != 0)
	{
		ft_putchar_fd(1, hex_min[nbr % 16]);
		nbr /= 16;
		count++;
	}
	return (count);
}

int	ft_print_hexa(int nbr, char hex)
{
	char	*hex_min;
	char	*hex_maj;
	int		count;

	count = 0;
	hex_min = "0123456789abcdef";
	hex_maj = "0123456789ABCDEF";
	if (hex == 'x')
		count = ft_print_min(hex_min, nbr);
	if (hex == 'X')
		count = ft_print_base(hex_max, nbr);
	if (hex == 'p')
	{
		count += ft_putstr_fd("0x");
		count += ft_print_base(hex_min, nbr);
	}
	return (count);
}


// int main()
// {
// 	int number = 5815;
// 	ft_print_hexa(number, 'x');
// 	return 0;
// }