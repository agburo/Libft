/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:03:52 by aburo             #+#    #+#             */
/*   Updated: 2024/11/25 22:03:55 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	ptr = (char *)big;
	if (*little == '\0')
		return (ptr);
	if (len == 0)
		return (NULL);
	while (ptr[i] != '\0' && i <= len)
	{
		j = 0;
		while (ptr[i + j] == little[j] && ptr[i + j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
	const char big[] = "Hello belli";
	const char little[] = "belli";
	
	printf("%s\n", ft_strnstr(big, little, 0));
	return (0);
}*/
