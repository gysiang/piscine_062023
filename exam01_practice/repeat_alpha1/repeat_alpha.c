/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:32:16 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/30 16:23:21 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int ac, char **av)
{
	int	repeat;
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] != '\0')
		{
			repeat = letter_count(av[1][i]);
			while (repeat > 0)
			{
				ft_putchar(av[1][i]);
				repeat--;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
