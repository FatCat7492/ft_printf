/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luschuma <luschuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 11:43:43 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/09 16:36:01 by luschuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
// int main()
// {
// 	t_list *node;

// 	int n = 123;
// 	node = ft_lstnew(&n);
// 	printf("%d\n", *(int *)node->content);

// 	char *string = "Salut";
// 	node = ft_lstnew(string);
// 	printf("%s\n", (char *)node->content);

// 	node = ft_lstnew(NULL);
// 	if (node->content == NULL)
// 		printf("Content of current node empty");

// 	free(node);
// 	return 0;
// }
