/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:25:01 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/03 09:34:26 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
1. fib seq =  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ....
2. each number is the sum of the two preceding ones
*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
int	main()
{
   	int index;

  	  // Test case 1: index = 0
    	index = 0;
    	int result = ft_fibonacci(index);
    	printf("Fibonacci number at index %d is: %d\n", index, result);

    	// Test case 2: index = 5
    	index = 5;
    	result = ft_fibonacci(index);
   	printf("Fibonacci number at index %d is: %d\n", index, result);

    	// Test case 3: index = 10
    	index = 10;
    	result = ft_fibonacci(index);
    	printf("Fibonacci number at index %d is: %d\n", index, result);

    	return (0);
} */
