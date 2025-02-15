/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <aburo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:52:12 by aburo             #+#    #+#             */
/*   Updated: 2024/12/03 16:32:58 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numstr(char c, const char *s)
{
	int	i;
	int	ns;
	int	flag;

	i = 0;
	ns = 1;
	flag = 1;
	while (s[i] != '\0')
	{
		flag = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			if (flag == 0)
			{
				flag = 1;
				ns++;
			}
			i++;
		}
	}
	return (ns);
}

static char	*ft_newstr(const char *s, char c, int start)
{
	char	*ptr;
	int		len;
	int		temp;

	len = 0;
	temp = start;
	while (s[start] && s[start] != c)
	{
		len++;
		start++;
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	len = 0;
	while (s[temp] && s[temp] != c)
	{
		ptr[len] = s[temp];
		len++;
		temp++;
	}
	ptr[len] = '\0';
	return (ptr);
}

static int	ft_free(char **matrix, int i)
{
	if (matrix == NULL)
	{
		while (i >= 0)
		{
			free (matrix[i]);
			i--;
		}
		free (matrix);
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		string;
	char	**matrix;

	i = 0;
	j = 0;
	string = ft_numstr(c, s);
	matrix = (char **)malloc(sizeof(char *) * string);
	if (!matrix)
		return (NULL);
	while (s[j] != '\0')
	{
		if (s[j] != c && (i == 0 || s[j - 1] == c))
		{
			matrix[i] = ft_newstr(s, c, j);
			if (matrix[i] == NULL && ft_free(matrix, i))
				return (NULL);
			i++;
		}
		j++;
	}
	matrix[i] = NULL;
	return (matrix);
}
/*
int main()
{
	int	i = ft_numstr(' ', "ciao come stai?");
	
	printf("%d\n", i);
}*/
