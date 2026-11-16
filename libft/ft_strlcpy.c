/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:19:28 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/15 11:51:02 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
// int main()
// {
// 	char	*s = "Was ist das";
// 	char	d[sizeof(s)];
// 	size_t size = sizeof(s);
// 	printf("BEFORE: %s\n", d);
// 	ft_strlcpy(d, s, size);
// 	printf("AFTER: %s\n", d);
// 	printf("%zu\n", ft_strlcpy(d, s, size));
// 	return 0;
// }