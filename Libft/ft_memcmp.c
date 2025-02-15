/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:17:40 by aburo             #+#    #+#             */
/*   Updated: 2024/11/25 19:17:49 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*u;
	unsigned char	*d;
	size_t			i;

	i = 0;
	u = (unsigned char *)s1;
	d = (unsigned char *)s2;
	while (i < n)
	{
		if (u[i] != d[i])
			return (u[i] - d[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char s[] = "Hello";
	char r[] = "Henlo";
	char t[] = "Hello";
	char v[] = "Henlo";

	printf("%d\n", ft_memcmp(s, r, 4));
	printf("%d\n", memcmp(t, v, 4));
}*/
