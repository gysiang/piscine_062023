/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:53:43 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/05 17:37:32 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>

void	solve(char *s1, char *s2)
{
	int	i;
	int	j;
	int	ascii[256] = {0};

	i = 0;
	while (s2[i] != '\0')
	{
		if (ascii[(int)s2[i]] == 0)
		{
			ascii[(int)s2[i]] = 1;
		}
		i++;
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (ascii[(int)s1[i]] == 1)
		{
			ascii[(int)s1[i]] = 2;
			write(1, &s1[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		solve(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
