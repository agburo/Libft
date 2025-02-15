/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:59:58 by aburo             #+#    #+#             */
/*   Updated: 2024/11/20 18:00:03 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ld;
	size_t	ls;

	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	if (ld >= size || size == 0)
		return (size + ls);
	i = 0;
	while (src[i] && ld + i < size - 1)
	{
		dst[ld + i] = src[i];
		i++;
	}
	dst[ld + i] = '\0';
	return (ld + ls);
}
/*
int main()
{
	char dst[] = "Hello ";
	char src[] = "World";

	printf("%d\n", ft_strlcat(dst, src, 4));
	printf("%d\n", strlcat(dst, src, 4));
}*/
