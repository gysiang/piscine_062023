/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:25:11 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/13 11:29:12 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*swap_cases(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(int ac, char **av)
{
	char		*res;
	int	i;

	if (ac == 2)
	{
		i = 0;
		res = swap_cases(av[1]);
		while (res[i] != '\0')
		{
			write(1, &res[i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
