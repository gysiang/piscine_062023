/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:17:20 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/11 11:16:28 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.
*/

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}	
	if (ac == 2)
	{	// to skip all spaces
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		// if not spaces write out the chars
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

