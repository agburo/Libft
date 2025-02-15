/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburo <aburo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:33:48 by aburo             #+#    #+#             */
/*   Updated: 2024/12/12 16:56:20 by aburo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	sign;

	sign = 1;
	nb = 0;
	while ((*str == ' ' || (*str >= 9 && *str <= 13)) && *str)
		str++;
	if (*str == '-')
	{
		sign = -sign;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (sign * nb);
}

/* #include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[] = "0";
	
	printf("%i\n", ft_atoi(str));
	printf("%i\n", atoi(str));
} */