/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:58:25 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/12 17:16:26 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c , 1);
}

void	ft_putnbr(int	nb)
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
		ft_putnbr(nbl /10);
	}
	ft_putchar(nbl % 10 + '0');
}

#include <stdio.h>
int	main(void)
{
	int num = -123;
	printf("The result is :");
	ft_putnbr(num);
	return (0);
}
