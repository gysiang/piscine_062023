/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:46:42 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/10 10:05:12 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int number1, int number2)
{
	ft_putchar((number1 / 10) + '0');
	ft_putchar((number1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((number2 / 10) + '0');
	ft_putchar((number2 % 10) + '0');
	if (number1 < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 < 99)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			print_numbers(number1, number2);
			number2++;
		}
		number1++;
	}
}
/*
int	main()
{
	ft_print_comb2();
} */
