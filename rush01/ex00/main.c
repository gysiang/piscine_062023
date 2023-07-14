/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:58:39 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/01 16:42:17 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	solver(int grid[4][4], int clues[16], int pos)
{
	int	i;

	i = 0;
	if (pos == 16)
		return (1);
	if (i <= 4)
	{
		
	}	
}

int	main(int ac, char **av)
{
	int	grid[4][4];
	int	*clues;

	grid = {
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	}
		if (check(ac, av) == 1)
		return (0);
	clues = parse_clues(av[1]);
	return (0);
}
