/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 12:25:24 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/24 13:30:10 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printline(int len, int start, int mid, int end)
{
	int	c;

	c = 0;
	while (len > c)
	{
		if (c == 0)
			ft_putchar(start);
		else if (c == len -1)
			ft_putchar(end);
		else
			ft_putchar(mid);
		c++;
	}
}

void	rush(int x, int y)
{
	int	counter;

	counter = 0;
	while (y > counter)
	{
		if (counter == 0)
			ft_printline(x, '/', '*', '\\');
		else if (counter == (y -1))
			ft_printline(x, '\\', '*', '/');
		else
			ft_printline(x, '*', ' ', '*');
		ft_putchar('\n');
		counter++;
	}
}
