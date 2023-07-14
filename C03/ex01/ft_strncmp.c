/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 09:55:11 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/28 16:43:40 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	printf("Test case 1: %d\n", ft_strncmp("Hello", "Hello", 5));
	printf("Test case 2: %d\n", ft_strncmp("Hello", "World", 3));
	printf("Test case 3: %d\n", ft_strncmp("Hello", "HelloWorld", 10));
	printf("Test case 4: %d\n", ft_strncmp("Hello", "HelloWorld", 5));
	printf("Test case 5: %d\n", ft_strncmp("HelloWorld", "Hello", 7));
	return (0);
} */
