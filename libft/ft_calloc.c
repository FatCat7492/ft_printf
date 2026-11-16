/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:29:02 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/15 16:02:16 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	total;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	tmp = 0;
	total = count * size;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, total);
	return (tmp);
}
// int	main(void)
// {
// 	int		*arr;
// 	size_t	i;

// 	arr = ft_calloc(5, sizeof(int));
// 	if (!arr)
// 	{
// 		printf("Allocation failed\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("arr[%zu] = %d\n", i, arr[i]);
// 		i++;
// 	}
// 	arr[0] = 42;
// 	arr[1] = 100;
// 	printf("\nAfter modifying the array:\n");
// 	printf("arr[0] = %d\n", arr[0]);
// 	printf("arr[1] = %d\n", arr[1]);
// 	free(arr);
// 	return (0);
// }