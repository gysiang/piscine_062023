/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 07:34:40 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/27 08:07:17 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int		letter_count(char c)
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

int		main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		while (*av[1])
		{
			i = letter_count(*av[1]);
			while (i--)
				write(1, av[1], 1);
			*av[1]++;
		}
	}
	ft_putchar('\n');
	return (0);
}
