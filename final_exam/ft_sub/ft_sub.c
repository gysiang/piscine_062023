/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:36:23 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/09 15:39:01 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sub(int *a, int b)
{
	int	temp;
	
	temp = *a;
	temp -= b;
	*a = temp;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 1;
	ft_sub(&a, b);
	printf("The result is :%d\n", a);
	return (0);
}
