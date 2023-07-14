/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:22:50 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/12 16:26:38 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	len;

	i = 0;
	len = ac - 1;
	if (ac >= 2)
	{
		while (av[len][i] != '\0')
		{
			write(1, &av[len][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
