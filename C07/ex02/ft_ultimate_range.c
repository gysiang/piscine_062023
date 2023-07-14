/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:28:25 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/04 13:09:35 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/*
1. check if min > max, if true there are no numbers so set pointer to NULL
to indicate empty range.
2. allocate memory for the number of int (i)
3. check if result == null, if true, memory allocation failed so set pointer
to null to indicate an error.
4. if the allocation was successful, save the memory address to the range pointer
5. assign min to range[i] and loop until all the int are saved in result
6. return i which counts the number of elements
*/
int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
int main(void)
{
    	int min;
    	int max;
    	int *tab;
    	int size;
    	int i;

    	i = 0;
    	min = 5;
    	max = 10;
    	size = ft_ultimate_range(&tab, min, max);
    	if (size == -1)
    	{
        	printf("Memory allocation failed.\n");
       		return (1);
   	 }
    	while (i < size)
   	{
        	printf("%d ", tab[i]);
        	i++;
    	}
    	free(tab);
    	return (0);
} */
