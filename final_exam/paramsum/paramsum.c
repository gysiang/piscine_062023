/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:36:11 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/10 16:15:30 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		nbl *= -1;
		ft_putchar('-');
	}
	if (nbl > 9)
	{
		ft_putnbr(nbl / 10);
	}
	ft_putchar(nbl % 10 + '0');
}

int	main(int ac, char **av)
{
	int	num_args;

	num_args = ac - 1;
	ft_putnbr(num_args);
	ft_putchar('\n');
	return (0);
}
