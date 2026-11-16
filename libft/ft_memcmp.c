/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:06:41 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/15 11:05:23 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*first;
	unsigned char	*second;

	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	while (n > 0)
	{
		if (*first != *second)
			return (*first - *second);
		first++;
		second++;
		n--;
	}
	return (0);
}

// int main()
// {
//     char *s1 = "SALUT";
//     char *s2 = "SALUT";
//     size_t n = 5;
//     int res;
//     res = ft_memcmp(s1, s2, n);
//     printf("%d", res);
//     return 0;
// }