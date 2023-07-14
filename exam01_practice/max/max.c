/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:28:19 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/07 14:36:41 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	max;
	int	i;

	i = 0;
	if (!len)
		return (0);
	max = 0;
	while (len > i)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	return (max);
}

int	main()
{
	int	array[] = {5, 10, 3, 8, 2, 11};
	unsigned int length = sizeof(array) / sizeof(array[0]);
	int	max_value = max(array, length);
	printf("The max value in the array is %d\n", max_value);
	return (0);
}
