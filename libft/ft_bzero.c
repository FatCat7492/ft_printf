/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luschuma <luschuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:16:15 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/09 14:00:23 by luschuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// void ft_bzero(void *s, size_t n)
// {
//     unsigned char *ptr;

//     if (!s)
//         return;
//     ptr = (unsigned char*)s;
//     while (n != 0)
//     {
//         *ptr = 0;
//         n--;
//         ptr++;
//     }
//     return;
// }

// int main()
// {
//     char str[] = "SAlut";
//     size_t n = 4;
//     ft_bzero(str, n);
//     int i = 0;
//     while (i < sizeof(str))
//     {   
//         printf("%d", str[i]);
//         i++;
//     }
//     return 0;
// }