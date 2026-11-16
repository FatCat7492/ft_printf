/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:01:32 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/12 14:50:18 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;

// 	// Initializing contents
// 	node1 = ft_lstnew((int*)42);
// 	node2 = ft_lstnew((int*)33);
// 	node3 = ft_lstnew((int*)22);

// 	// Linking nodes
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	printf("%d\n", ft_lstsize(node1));
// 	return 0;
// }