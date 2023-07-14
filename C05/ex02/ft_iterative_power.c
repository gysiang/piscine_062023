/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 08:07:56 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/03 09:09:09 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
1. if power < 0 return 0, if power== 0 return 1
2. run a loop from 1 to power -1
3. etc if nb = 3, power = 3, it will run the loop twice. 3 * 3 * 3
4. return the result 
*/

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
/*
int	main()
{
	int	num = 2;
	int	exp = 5;
	int	res = ft_iterative_power(num, exp);

	printf("%d raised to the power of %d is: %d\n", num, exp, res);
	return (0);
} */
