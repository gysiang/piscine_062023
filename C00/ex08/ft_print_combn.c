/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:57:25 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/10 11:52:46 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_range(int *range, int n)
{
	int	i;
	int	display;

	display = 1;
	i = 0;
	while (++i < n)
		if (range[i - 1] >= range[i])
			display = 0;
	if (!display)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(range[i] + 48);
	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[10];

	i = -1;
	if (n < 0 || n > 10)
		return ;
	while (++i < n)
		range[i] = i;
	while (range[0] <= (10 - n) && n >= 1)
	{
		ft_print_range(range, n);
		if (n == 10)
			break ;
		range[n -1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
		}
	}
}
/*
int	main(void)
{
	ft_print_combn(2);
	return (0);
} */
