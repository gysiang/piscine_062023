/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:46:55 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/13 14:27:56 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	rstr_capitalizer(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while(str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] != ' ' && str[i + 1] == ' ' && (str[i] >= 'a'
			&& str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	while (str[len - 1] != '0' && str[len - 1] >= 'a' && str[len - 1] <= 'z')
	{
		str[len -1] -= 32;
	}
	str[len] = '\0';  
	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac >= 2)
	{
		while (ac > i)
		{
			rstr_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}	
	}
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	return (0);
}
