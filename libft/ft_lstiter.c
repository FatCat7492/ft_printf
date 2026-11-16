/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:20:07 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/14 13:06:13 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	f(void *content)
// {
// 	*(int *)content += 100;
// 	return;
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	int a = 42;
// 	int b = 33;
// 	int c = 22;
// 	// Initializing contents
// 	node1 = ft_lstnew(&a);
// 	node2 = ft_lstnew(&b);
// 	node3 = ft_lstnew(&c);
// 	// Linking nodes
// 	node1->next = node2;
// 	node2->next = node3;
// 	ft_lstiter(node1, f);
// 	printf("%d\n", *(int*)node1->content);
// 	printf("%d\n", *(int*)node2->content);
// 	printf("%d\n", *(int*)node3->content);
// 	return 0;
// }