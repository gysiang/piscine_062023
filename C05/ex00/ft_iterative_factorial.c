/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 07:12:26 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/03 08:50:13 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
1. if nb < 0, return (0); arg is not valid because it's <0
2. run a while loop i will increment from 1 to nb
3. multiply res by i, it will stop when nb = i, if !3, 1*2*3
4. return res when the while loop breaks;
*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
int	main (void)
{
	printf("%i", ft_iterative_factorial(3));
} */
