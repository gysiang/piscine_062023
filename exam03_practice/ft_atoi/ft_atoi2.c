/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:11:35 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/07 09:28:18 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *s)
{
	int		sign;
	int		i;
	long	r;
	
	r = 0;
	i = 0;
	sign = 1;
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
	{
		i++;
	}
	while (s[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + s[i] - '0';
		i++;
	}
	return (sign * (int)r);
}

int	main()
{
	char *str = "-1234512345";
	int result = ft_atoi(str);

	printf("Converted interger: %d\n", result);
}
