/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:47:22 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/11 12:04:15 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c , 1);
}

void	ft_putnbr(int nb)
{
	long	nbl;
	
	nbl = nb;
	while (nbl < 0)
	{
		nbl *= -1;
		ft_putchar('-');
	}
	while (nbl > 9)
	{
		ft_putnbr(nbl / 10);
	}
	ft_putchar(nbl % 10 + '0');
}
