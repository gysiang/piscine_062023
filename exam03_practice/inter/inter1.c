/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:18:29 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/07 13:25:26 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void solve(char *str1, char *str2)
{
	int	i;
	int	ascii[256] = {0};

	i = 0;
	while (str2[i] != '\0')
	{
		if (ascii[(int)str2[i]] = 0)
			ascii[(int)str2[i]] = 1;
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		if (ascii[(int)str1[i]] == 1)
		{
			ascii[(int)str1[i]] = 2;
			write(1, &str1[i], 1);
		}
		i++;
	}
}



int	main(int ac, char **av)
{
	if (ac == 3)
	{
		solve(av[1], av[2]);
	}
	return (0);
}
