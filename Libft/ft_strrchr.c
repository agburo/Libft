/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <aburo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:05:09 by aburo             #+#    #+#             */
/*   Updated: 2024/12/12 16:59:26 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*r;
	char	c1;

	r = (char *)s;
	c1 = (char)c;
	i = ft_strlen(r);
	if (c1 == '\0')
		return (&r[i]);
	while (i >= 0)
	{
		i--;
		if (r[i] == c1)
			return (&r[i]);
	}
	return (NULL);
}
/*
int main()
{
	char *result = ft_strrchr("Hello", 'l');
	printf("%s\n", result);
	char *resu = strrchr("Hello", 'l');
	printf("%s\n", resu);
	return (0);
}*/
