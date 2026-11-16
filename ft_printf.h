/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:40:20 by luschuma          #+#    #+#             */
/*   Updated: 2026/11/13 15:15:05 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *, ...);
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