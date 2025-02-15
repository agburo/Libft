/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:24:28 by aburo             #+#    #+#             */
/*   Updated: 2024/11/19 17:27:35 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned)c;
		i++;
	}
	return (s);
}
/*
int main()
{
	char s[] = "Hello";
	char r[] = "Hello";

	printf("%s\n", (char*)ft_memset(s, 45, 3));
	printf("%s\n", (char*)memset(r, 45, 3));
}*/
