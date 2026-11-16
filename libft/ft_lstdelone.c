/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:03:22 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/14 16:38:22 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void* content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// int main()
// {
// 	t_list *node1;
// 	int *a;
// 	a = malloc(1 * sizeof(int));
// 	*a = 10;
// 	// Initializing contents
// 	node1 = ft_lstnew(a);
// 	printf("BEFORE\n");
// 	printf("%d\n", *(int*)node1->content);
// 	ft_lstdelone(node1, del);
// 	return 0;
// }