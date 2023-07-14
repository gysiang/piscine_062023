/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:51:18 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/10 15:33:54 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	range;
	int	i;
	int	*res;

	i = 0;
	if (start > end)
		return (0);
	range = end - start;
	res = (int *)malloc(sizeof(int) * range);
	if (!res)
		return (NULL);
	while (range > 0)
	{
		res[i] = start;
		i++;
		start++;
		range--;
	}
	return (res);
}

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
	tab = ft_rrange(min, max);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
