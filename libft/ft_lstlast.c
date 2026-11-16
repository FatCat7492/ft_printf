/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:54:22 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/12 14:31:37 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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

// 	printf("%p\n", node3);

// 	// Linking nodes
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	t_list *node4 = ft_lstlast(node1);

// 	printf("%d\n", *(int*)node4->content);
// 	return 0;
// }