/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:24:13 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/14 20:56:45 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*(f)(void* content)
// {
// 	int	*new_content;
// 	new_content = malloc(1 * sizeof(int));
// 	if (!new_content)
// 		return (NULL);
// 	*new_content = *(int *)content + 100;
// 	return ((void *)new_content);
// }
// void	(del)(void* content)
// {
// 	free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new_node);
		lst = lst->next;
	}
	return (res);
}

// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *node4;
// 	t_list *new_list;
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
// 	node3->next = node4;
// 	new_list = ft_lstmap(node1, f, del);
// 	if (new_list == NULL)
// 		printf("KO\n");
// 	else
// 		printf("KO\n");
// 	printf("%d", new_list->content);
// 	return 0;
// }