/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 12:09:49 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/12 14:49:44 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = lst[0];
	lst[0] = new;
	return ;
}

// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *node4;
// int a = 42;
// int b = 33;
// int c = 22;
// int d = 100;
// 	// Initializing contents
// 	node1 = ft_lstnew(&a);
// 	node2 = ft_lstnew(&b);
// 	node3 = ft_lstnew(&c);
// 	node4 = ft_lstnew(&d);
// 	// Linking nodes
// 	node1->next = node2;
// 	node2->next = node3;
// 	printf("%p\n", node1);
// 	printf("%d\n", *(int*)node1->content);
// 	ft_lstadd_front(&node1, node4);
// 	printf("\n");
// 	printf("%p\n", node1);
// 	printf("%d\n", *(int*)node1->content);
// 	return 0;
// }
