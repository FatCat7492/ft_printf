/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:28:36 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/15 16:15:24 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, 0, end + 1));
}

// static int	is_in_set(char c, char const *set)
// {
// 	while (*set)
// 	{
// 		if (c == *set)
// 			return (1);
// 		set++;
// 	}
// 	return (0);
// }
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		indx_start_trim;
// 	int		indx_end_trim;
// 	int		i;
// 	char	*strtrim;
// 	if (!s1 || !set)
// 		return (NULL);
// 	indx_end_trim = ft_strlen(s1) - 1;
// 	indx_start_trim = 0;
// 	while (is_in_set(s1[indx_start_trim], set))
// 		indx_start_trim++;
// 	while (is_in_set(s1[indx_end_trim], set))
// 		indx_end_trim--;
// 	strtrim = malloc((indx_end_trim - indx_start_trim + 1) * sizeof(char));
// 	if (!strtrim)
// 		return (NULL);
// 	i = 0;
// 	while (i <= (indx_end_trim - indx_start_trim))
// 	{
// 		strtrim[i] = s1[indx_start_trim + i];
// 		i++;
// 	}
// 	strtrim[i] = '\0';
// 	return (strtrim);
// }
// int main()
// {
//     char    *str = "  ,:,Jesus is :, the strongest ,:,    ";
//     char * set = "  ,:,";
//     printf("%s\n", ft_strtrim(str, set));
//     return 0;
// }
