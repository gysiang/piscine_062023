/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:56:47 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/13 12:26:45 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkduplicates(char *str)
{
	int	ascii[128] = {0};
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ascii[(int)str[i]] == 0)
		{
			ascii[(int)str[i]] = 1;
		}
		else if (ascii[(int)str[i]] == 1)
		{
			write(1, "1", 1);
			return (1);
		}
		i++;
	}
	write(1, "0", 1);
	return (0);
}


int	main(int ac, char **av)
{
	if (ac == 2)
	{
		checkduplicates(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
