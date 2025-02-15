/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <aburo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:43:53 by aburo             #+#    #+#             */
/*   Updated: 2024/11/27 17:08:58 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int main()
{
	char s[] = "Hello";
	char r[] = "Hello";

	bzero(r, 3);
	ft_bzero(s, 3);
	printf("%s\n", (char*)s);
	printf("%s\n", (char*)r);
}*/
