/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:26:02 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/15 11:53:49 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	src_len = ft_strlen(src);
	if (dst_len == size)
		return (size + src_len);
	i = dst_len;
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst_len + src_len);
}

// int main()
// {
// 	char dest[100] = "bonjour";
// 	char *src = "monde";
// 	size_t size = 15;
// 	printf("%ld", ft_strlcat(dest, src, size));
// 	return 0;
// }