/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 07:40:11 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/03 08:52:22 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
1. if nb < 0 , return 0, if nb is 1 return 1
2. return the recursive function and call it again until nb = 1
3. etc if nb is 3, it will keep calling the function until nb -1 (3*2*1)
*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}
/*
int	main()
{
	printf("Factorial of 5 is: %d\n", ft_recursive_factorial(5));
} */
