/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 09:54:42 by luis              #+#    #+#             */
/*   Updated: 2026/10/12 10:36:33 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int main(){
// 	char *src = "Hello";
// 	char dst[sizeof(src)];
// 	size_t n = sizeof(src);
// 	void	*result;

// 	result = ft_memcpy(dst, src, n);
// 	printf("%p\n", dst);
// 	printf("%p\n", result);
// 	printf("%s\n", (char*)result);
// 	return 0;
// }