/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 10:44:57 by luis              #+#    #+#             */
/*   Updated: 2026/10/12 10:53:41 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst < src)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (dst > src)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
// int main()
// {
// 	char str[] = "abcdef";
// 	char dst[sizeof(str)];
// 	size_t len = sizeof(str);
// 	void *result;
// 	printf("SRC BEFORE: %s\n", str);

// 	result = ft_memmove(str + 2, str, len);
// 	printf("%s\n", (char*)result);
// }