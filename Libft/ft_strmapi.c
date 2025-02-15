/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <aburo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:37:53 by aburo             #+#    #+#             */
/*   Updated: 2024/12/04 19:13:51 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = (f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
char	ft_ttoupper(unsigned int i, char c)
{
	(void)i;
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
int main()
{
	char *str= "Hello";

	printf("%s\n", ft_strmapi(str, ft_ttoupper));
	free(ft_strmapi(str, ft_ttoupper));
	return (0);
}*/