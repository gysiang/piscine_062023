/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:35:09 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/03 11:34:51 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
1. irrational numbers are real numbers
2. cannot be expressed in form of p/q, will have decimals
3. if i * i = nb, return i
*/
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*
int	main()
{
	int number;

    	// Test case 1: Valid square root
    	number = 16;
    	int result = ft_sqrt(number);
    	printf("Square root of %d is: %d\n", number, result);

    	// Test case 2: square root of large sq num
    	number = 2147395600;
    	result = ft_sqrt(number);
    	printf("Square root of %d is: %d\n", number, result);
    	return (0);
} */
