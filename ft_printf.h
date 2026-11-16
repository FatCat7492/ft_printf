/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luschuma <luschuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:40:20 by luschuma          #+#    #+#             */
/*   Updated: 2026/11/16 11:25:12 by luschuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *string, ...);
int	is_in_set(char c);
int	ft_print_char(char c);
int	ft_print_string(char *str);
int	ft_print_decimal(int number);
int	ft_print_unsigned(unsigned int number);
int	triage_center(char type, va_list *args);

/*printf_functions*/
int	ft_putnbr_base(char *base, unsigned long number);
int	ft_print_pointer(char *base, void *pointer);
int	ft_print_hex(unsigned long nbr, char hex);

#endif