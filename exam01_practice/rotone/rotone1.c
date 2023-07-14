/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:54:58 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/30 13:58:46 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rotone(char c)
{
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c < 'm'))
		c += 13;
	else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		c -= 13;
	return (c);
}

int	main(int ac, char **av)
{
	int	i;
		
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			ft_putchar(rotone(av[1][i]));
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
