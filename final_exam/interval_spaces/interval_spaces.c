/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_spaces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:39:47 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/09 15:55:24 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	len;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			if (len - 1> 0)
			{
				write(1, "   ", 3);
				len--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
