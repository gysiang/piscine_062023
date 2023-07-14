/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:11:08 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/23 12:19:20 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	char a;

	a = '9';
	while (a >= '0')
	{
		write(1, &a, 1);
		a--;
	}
}

int	main()
{
	ft_countdown();
	return (0);
}
