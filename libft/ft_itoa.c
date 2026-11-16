/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:29:49 by luis              #+#    #+#             */
/*   Updated: 2026/10/14 20:56:03 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int nbr)
{
	int	res;

	res = 0;
	if (nbr <= 0)
		res++;
	while (nbr != 0)
	{
		res++;
		nbr /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;	
	long	nb;

	nb = (long)n;
	len = count_len(nb);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (nb == 0)
		return (res[0] = '0', res);
	if (nb < 0)
	{
		nb *= -1;
		res[0] = '-';
	}
	while (nb > 0)
	{
		res[len--] = nb % 10 + 48;
		nb /= 10;
	}
	return (res);
}

/*int main()
{
    int number = 231000712;
    printf("%s", ft_itoa(number));
    return 0;
}*/