/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:46:53 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/04 12:39:49 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		i;
	int		*result;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	result = (int *)malloc(range * sizeof(int));
	if (!result)
		return (NULL);
	while (range > 0)
	{
		result[i] = min;
		min++;
		i++;
		range--;
	}
	return (result);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
} */
