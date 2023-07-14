/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:55:08 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/03 10:10:42 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
1. prime num can only be divided by itself
2. check from 2 to sqrt of nb
3. if it can be divided by other numbers, it is not a prime, return 0
4. else return 1
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
    int number;

    // Test case 1: Prime number
    number = 13;
    int result = ft_is_prime(number);
    printf("%d is prime: %s\n", number, result ? "Yes" : "No");

    // Test case 2: Composite number
    number = 24;
    result = ft_is_prime(number);
    printf("%d is prime: %s\n", number, result ? "Yes" : "No");

    // Test case 3: Edge case for 1
    number = 1;
    result = ft_is_prime(number);
    printf("%d is prime: %s\n", number, result ? "Yes" : "No");
    return (0);
} */
