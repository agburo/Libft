/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <aburo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:38:57 by aburo             #+#    #+#             */
/*   Updated: 2024/12/04 19:13:28 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpystr(char *dest, const char *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	int		len1;
	int		len2;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	new = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (new == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	ft_cpystr(new, s1, len1);
	ft_cpystr(new + len1, s2, len2);
	new[len1 + len2] = '\0';
	return (new);
}
/*
int main()
{
    char *s = ft_strjoin("Hello ", "world");
    printf("%s\n", s);
    free(s);
}*/
