/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:59:14 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/13 15:39:41 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *node4;
// 	int a = 42;
// 	int b = 33;
// 	int c = 22;
// 	int d = 100
// 	// Initializing contents
// 	node1 = ft_lstnew(&a);
// 	node2 = ft_lstnew(&b);
// 	node3 = ft_lstnew(&c);
// 	node4 = ft_lstnew(&d);
// 	printf("%p\n", node4);
// 	// Linking nodes
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	ft_lstadd_back(&node1, node4);
// 	printf("%p\n", node4);
// 	return 0;
// }