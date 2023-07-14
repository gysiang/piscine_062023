/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 08:22:32 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/03 09:23:55 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
1. if power < 0 return 0, if nb = 0 and pow = 0 return 1, if power = 0 return 1
2. etc if nb = 2 and power = 5.  2 * (recursive will run 4 times - 2 * 2 * 2 * 2)
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int	main()
{
	int	number = 2;
	int	exponent = 5;
	int	result = ft_recursive_power(number, exponent);
	
	printf("%d raised to the power of %d is %d\n", number, exponent, result);
	return (0);
} */
