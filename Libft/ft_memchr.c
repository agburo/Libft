/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:24:04 by aburo             #+#    #+#             */
/*   Updated: 2024/11/25 19:13:25 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*r;
	unsigned char	ch;
	size_t			i;

	i = 0;
	r = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (r[i] == ch)
			return (&r[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char s[] = "Hello";
	char r[] = "Hello";

	printf("%s\n", (char *)ft_memchr(s, 'e', 1));
	printf("%s\n", (char *)memchr(r, 'e', 1));
}*/
