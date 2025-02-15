/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <aburo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:31:26 by aburo             #+#    #+#             */
/*   Updated: 2024/12/12 17:31:31 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr(long n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	else if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nbr;
	long	i;
	char	*ptr;
	int		len;
	int		j;

	nbr = n;
	len = ft_nbr(nbr);
	j = len - 1;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		ptr[i++] = '-';
		nbr = -nbr;
	}
	while (i++ < len)
	{
		ptr[j--] = nbr % 10 + '0';
		nbr /= 10;
	}
	ptr[i - 1] = '\0';
	return (ptr);
}
/* 
int main()
{
	int n = -1234;
	char *r = ft_itoa(n);

	printf("%s\n", r);
	free(r);
} */
