/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:58:33 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/09 17:17:58 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	ascii[128] = {0};
	char	*s1;
	char 	*s2;

	i = 0;
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ac == 3)
	{
		s1 = av[1];
		s2 = av[2];
		while (s2[i] != '\0')
		{
			if (ascii[(int)s2[i]] == 0)
				ascii[(int)s2[i]] = 1;
			i++;
		}
		i = 0;
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
	write(1, "\n", 1);
	return (0);
}
