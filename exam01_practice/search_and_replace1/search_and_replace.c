/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:41:38 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/30 14:50:58 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	
	if (ac != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	if (av[3][1] != '\0' || av[2][1] != '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	// if av[1][i] the string is not at the end of the line
	while (av[1][i] != '\0')
	{
		// compare the characters, if it match replace it
		if (av[1][i] == av[2][0])
			av[1][i] = av[3][0];
		// write it and increment i
		write(1, &av[1][i], 1);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
