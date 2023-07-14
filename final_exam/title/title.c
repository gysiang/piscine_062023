/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   title.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:30:49 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/13 11:50:20 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && (str[i + 1] >= 'a'
			&& str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		str_capcase(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
