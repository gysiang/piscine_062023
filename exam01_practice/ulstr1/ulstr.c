/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:58:54 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/30 15:11:54 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_convertcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	else if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'z')
				|| (av[1][i] >= 'A' && av[1][i] <= 'Z'))
			{
				ft_putchar(ft_convertcase((av[1][i])));
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
