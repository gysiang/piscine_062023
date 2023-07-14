/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 10:46:27 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/10 12:00:23 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a != 0 && b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main()
{
	int a;
	int b;
	int div_result;
	int mod_result;

	a = 10;
	b = 5;

	ft_div_mod(a, b, &div_result, &mod_result);

	printf("Division Result = %d\n", div_result);
	printf("Modulus Result  = %d\n", mod_result);
}
*/
