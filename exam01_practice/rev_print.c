/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:09:19 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/29 16:25:03 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	main(int ac, char **av)
{
	int	i;

	i = ft_strlen(av[1]);
	if (ac == 2)
	{	
		while (i >=  0)
		{
			write(1, &av[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
