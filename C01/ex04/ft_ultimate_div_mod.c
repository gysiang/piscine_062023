/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:12:17 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/25 11:13:24 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main()
{
	int a;
	int b;

	a = 5;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("Division Result :%d\n",a);
	printf("Modulus Result :%d",b);
	return (0);
}
*/
