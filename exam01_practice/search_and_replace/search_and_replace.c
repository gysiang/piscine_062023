/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:17:41 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/29 14:25:23 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	// if there are 4 arguments, continue
	if (ac == 4)
	{	
		// check if the letters in 2nd and 3rd exists
		if (!av[2][1] && !av[3][1])
		{
			// loop through 1st argument string
			while (av[1][i])
			{
				// if there is a match
				if (av[1][i] == av[2][0])
					// write the new char in
					write(1, &av[3][0], 1);
				else
					// else write what is existing
					write(1, &av[1][i], 1);
				i++;
			}
		}

	}
	// return a newline if ac is not 4
	write(1, "\n", 1);
	return (0);
}
