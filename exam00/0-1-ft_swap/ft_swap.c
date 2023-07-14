/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:29:03 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/23 14:42:59 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tem;

	tem = *a;
	*a = *b;
	*b = tem;
}
/*
int	main()
{
	int x;
	int y;

	x = 2;
	y = 3;
	ft_swap(&x, &y);
	printf("Here are the results for the swap\n");
	printf("x :%d\n", x);
	printf("y :%d\n", y);
}
*/
