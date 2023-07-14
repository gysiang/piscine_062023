/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:56:39 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/10 13:15:02 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	max(int	*tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	max = tab[0];
	while (len > i)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>

int main()
{
    int arr[] = {5, 9, 2, 11, 3, 7};
    unsigned int arr_len = sizeof(arr) / sizeof(arr[0]);

    int maximum = max(arr, arr_len);
    printf("Maximum value: %d\n", maximum);

    return 0;
}
