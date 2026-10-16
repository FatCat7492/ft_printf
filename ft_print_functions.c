/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luschuma <luschuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:36:37 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/16 16:23:32 by luschuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// void	ft_print_char(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_print_string(char *str)
// {
// 	write(1, str++, 1);
// }

// void ft_print_decimal(int nbr)
// {
// 	ft_putnbr_fd(nbr);
// }
void	ft_print_hexa(int nbr)
{
	char	*number_string;
	char	*hex_min;
	char	*hex_maj;
	int		number_hexa;

	hex_min = "0123456789abcdef";
	hex_maj = "0123456789ABCDEF";


	while(nbr != 0)
	{
		ft_putchar_fd((nbr % 16) + '0');
		nbr /= 16;
	}
}
int main()
{
	int number = 5815;
	ft_print_hexa(number);
	return 0;
}