/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:14:29 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/11 14:22:09 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	alphamirror(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return ('Z' - c + 'A');
	}
	if (c >= 'a' && c <= 'z')
	{
		return ('z' - c + 'a');
	}
	else
	{
		return (c);
	}
}

int	main(int ac, char **av)
{
	int	i;
	char		c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			c = alphamirror(av[1][i]);
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
