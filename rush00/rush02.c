/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 12:44:41 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/24 13:32:00 by gyong-si         ###   ########.fr       */
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
			ft_printline(x, 'A', 'B', 'A');
		else if (counter == (y -1))
			ft_printline(x, 'C', 'B', 'C');
		else
			ft_printline(x, 'B', ' ', 'B');
		ft_putchar('\n');
		counter++;
	}
}
