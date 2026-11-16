/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:12:50 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/15 16:04:37 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
	}
	return (words);
}

static void	free_split(char **split, int i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
}

static char	*get_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static int	fill_split(char **split, const char *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			split[j] = get_word(s, start, i);
			if (!split[j])
				return (free_split(split, j), 0);
			j++;
		}
	}
	split[j] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (!fill_split(split, s, c))
		return (NULL);
	return (split);
}

// int main()
// {
//     char *str = "  Jesus is the Lordest";
//     char c = ' ';
//     char **split = ft_split(str, c);
//     int i;
//    int tokens;
//     tokens = tokens_count(str, c);
//     i = 0;
//     while (i < tokens)
//     {
//         printf("%s\n", split[i]);
//         i++;
//     }
// 	free(split);
//     return 0;
// }



