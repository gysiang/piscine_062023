/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 07:30:15 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/27 07:33:14 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main (int argc, char **argv)
{
	printf("%d\n", ft_strlen(argv[1]));
	return (0);
}
