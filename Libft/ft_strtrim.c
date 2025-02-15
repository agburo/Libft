/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <aburo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:37:52 by aburo             #+#    #+#             */
/*   Updated: 2024/12/04 19:15:56 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_len(const char *s1, const char *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	while (end > start && ft_isset(s1[end], set))
		end--;
	return (end - start + 1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ptr;
	int		len;
	int		start;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	start = 0;
	len = ft_len(s1, set);
	if (len <= 0)
		return (ft_strdup(""));
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	while (i < len)
	{
		ptr[i] = s1[start];
		start++;
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
/*
int main()
{
	char s1[] = "aaaaaCiaoaaaa";
	const char *set = "a";
	char *result = ft_strtrim(s1, set);

	printf("%s\n", ft_strtrim(s1, set));
	free(result);
	return (0);
}*/
