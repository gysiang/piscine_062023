/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:07:39 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/29 08:46:02 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_whitespace(char *str, int *ptr1)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] <= 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*ptr1 = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	i = 0;
	sign = ft_whitespace(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (sign * result);
}
/*
int	main()
{
	printf("%d\n", ft_atoi("-12345"));
	printf("%d\n", ft_atoi("123abc"));
	return (0);
} */
