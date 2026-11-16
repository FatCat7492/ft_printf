/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:42:52 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/14 21:34:42 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char *str = "SALUT";
// 	int c = 97;
// 	size_t n = 4;
// 	printf("%p", ft_memchr(str, c, n));
// 	return 0 ;
// }