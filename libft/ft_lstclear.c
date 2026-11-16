/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:12:36 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/14 15:26:53 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void* content)
// {
// 	free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *node4;
// 	int *a = malloc(1 * sizeof(int));
// 	int *b = malloc(1 * sizeof(int));
// 	int *c = malloc(1 * sizeof(int));
// 	int *d = malloc(1 * sizeof(int));
// 	if (!a || !b || !c || !d)
// 		return 1;
// 	*a = 42;
// 	*b = 33;
// 	*c = 22;
// 	*d = 111;
// 	// Initializing contents
// 	node1 = ft_lstnew(a);
// 	node2 = ft_lstnew(b);
// 	node3 = ft_lstnew(c);
// 	node4 = ft_lstnew(d);
// 	// Linking nodes
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next  node4;
// 	ft_lstclear(&node1, del);
// 	if (node1 == NULL)
// 		printf("OK\n");
// 	else
// 		printf("KO\n");
// 	return 0;
// }
