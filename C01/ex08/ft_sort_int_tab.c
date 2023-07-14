/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:07:52 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/10 12:37:35 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if(tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int	main()
{
	int	tab[] = {5, 2, 8, 12, 1, 6};
	int	size = sizeof(tab) / sizeof(tab[0]);
	int	i;

	i = 0;
	printf("Original array: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

	ft_sort_int_tab(tab, size);
	
	printf("\nSorted array: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
