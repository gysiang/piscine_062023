/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:33:04 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/07 09:52:08 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	ft_mirror(char c)
{
	char	i;

	if (c >= 'A' && c <= 'Z')
	{
		i = 'Z' - (c - 'A');
		return (i);		
	}
	else if (c >= 'a' && c <= 'z')
	{
		i = 'z' - (c - 'a');
		return (i);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	char	alp;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (ft_isalpha(av[1][i]))
			{
				alp = ft_mirror(av[1][i]);
				ft_putchar(alp);
			}
			else
			{
				ft_putchar(av[1][i]);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
