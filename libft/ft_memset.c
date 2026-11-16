/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 10:27:01 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/14 21:17:09 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	if (!b)
		return (b);
	ptr = (unsigned char *)b;
	while (len != 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (b);
}

// int main()
// {
// 	int b[3] = {135, 34, 37};
// 	int c = 97;
// 	size_t len = 4;
// 	ft_memset(b,c, len);
// 	int i = 0;
// 	while (i < sizeof(b))
// 	{
// 		printf("%d", b[i]);
// 		i++;
// 	}
// 	return 0;
// }