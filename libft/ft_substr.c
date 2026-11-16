/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:16:44 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/15 12:05:48 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*res;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len + start > s_len)
		len = s_len - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res = ft_memcpy(res, s + start, len);
	res[len] = '\0';
	return (res);
}

/*
int main()
{
    const char  *string = "Hallelujah Jesus has come";
    printf("%s", ft_substr(string, 10, 120));
    return 0;
}*/
