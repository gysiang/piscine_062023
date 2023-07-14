/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:11:38 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/29 17:34:26 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rotone(char *c)
{	
	while (*c)
	{
		if ((*c >= 'A' && *c <= 'Y') || (*c >= 'a' && *c <= 'y'))
			ft_putchar(*c + 1);
		else if (*c == 'Z' || *c == 'z')
			ft_putchar(*c - 25);
		else
			ft_putchar(*c);
		++c;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
