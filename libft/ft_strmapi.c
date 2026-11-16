/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 10:41:32 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/12 13:58:18 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	f(unsigned int i, char c)
// {
// 	return (c + i);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*new_string;

	new_string = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

// int main()
// {
//     char str1[] = "Salutzz";
//     char *str2;
//     str2 = ft_strmapi(str1, f);
//     printf("%s", str2);
// 	free(str2);
//     return 0;
// }