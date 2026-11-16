/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:09:39 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/12 11:50:34 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*strjoin;

	strjoin = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!strjoin)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		strjoin[i + j] = s2[j];
		j++;
	}
	strjoin[i + j] = '\0';
	return (strjoin);
}

/*
int main()
{
    char    *prefix = "Hello";
    char    *suffix = "World!";
    printf("%s", ft_strjoin(prefix, suffix));
    return 0;
}*/