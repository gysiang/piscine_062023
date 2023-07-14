/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:57:41 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/11 11:25:32 by gyong-si         ###   ########.fr       */
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
#include <stdio.h>
int	main(int ac, char **av)
{
	int	len;
	int	i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		if (len--)
			write(1, &av[1][len], 1);
	}
	write(1, "\n", 1);
	return (0);
}
