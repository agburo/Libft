/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <aburo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:47:59 by aburo             #+#    #+#             */
/*   Updated: 2024/12/12 18:01:46 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;
	size_t			temp;

	i = 0;
	temp = 0;
	if (!s)
		return (NULL);
	ptr = malloc(sizeof (char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[temp])
	{
		if (i < len && start <= temp)
		{
			ptr[i] = s[temp];
			i++;
		}
		temp++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* 
int main()
{
    char *s = ft_substr("ciao bebi", 5, 8);
    printf("%s\n", s);
    free (s);
} */
