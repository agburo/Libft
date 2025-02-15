/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:43:13 by aburo             #+#    #+#             */
/*   Updated: 2024/11/25 16:43:19 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*r;
	char	c1;

	i = 0;
	r = (char *)s;
	c1 = (char)c;
	while (r[i] != '\0')
	{
		if (r[i] == c1)
			return (&r[i]);
		i++;
	}
	if (c1 == '\0')
		return (&r[i]);
	return (NULL);
}
/*
int main()
{
	char *result = ft_strchr("Hello", 'e');
	printf("%s\n", result);
	char *resu = strchr("Hello", 'e');
	printf("%s\n", resu);
	return (0);
}*/
