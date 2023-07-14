/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 10:28:01 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/26 10:48:55 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	is_numeric;
	char	a[] = "12345678z";

	is_numeric = ft_str_is_numeric(a);
	printf("%d\n", is_numeric);
}
*/
