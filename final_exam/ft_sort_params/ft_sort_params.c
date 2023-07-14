/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:43:19 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/12 14:30:01 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	len;
	char		*temp;

	len = ac - 1;
	i = 1;
	while (len > i)
	{
		j = 1;
		while (len > j)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (len >= i)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j++], 1);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
