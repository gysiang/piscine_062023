/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:02:31 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/09 14:13:09 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	letter_count(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (c - 'A' + 1);
	}
	else
	{
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	repeat;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			repeat = letter_count(av[1][i]);
			while (repeat--)
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
