/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luschuma <luschuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:40:20 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/20 14:47:07 by luschuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf(const char *, ...);
static int	is_in_set(char c);
static int	ft_print_char(char c);
static int	ft_print_string(char *str);
static int	ft_print_decimal(int number);
static int	triage_center(char type, va_list args);
static int	ft_print_base(char *base, int number);
int	ft_print_hex(int nbr, char hex);


#endif