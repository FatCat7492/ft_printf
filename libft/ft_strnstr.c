/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:55:12 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/14 14:36:15 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] && big[i + j] == little[j] && i + j < len)
				j++;
		}
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char *big = "Salut ca va ";
// 	char *little = "ca";
// 	size_t len = 5;
// 	printf("%s", ft_strnstr(big, little, len));
// 	return 0;
// }