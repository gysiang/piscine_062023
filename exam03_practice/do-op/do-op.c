/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:57:20 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/07 10:32:12 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *s)
{
	int	sign;
	int	i;
	long		r;

	sign = 1;
	i = 0;
	r = 0;
	while (s[i] == ' ' || (s[i] == '\t' && s[i] == '\r'))
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

int	main(int ac, char **av)
{
	int	i;
	int	num1;
	int	num2;
	int	res;

	i = 0;
	num1 = 0;
	num2 = 0;
	if (ac == 4)
	{
		num1 = ft_atoi(av[1]);
		num2 = ft_atoi(av[3]);
		if (av[2][0] == '+')
		{
			res = num1 + num2;
		}
		else if (av[2][0] == '-')
		{
			res = num1 - num2;
		}
		else if (av[2][0] == '*')
		{
			res = num1 * num2;
		}
		else if (av[2][0] == '/')
		{
			res = num1 / num2;
		}
		else if (av[2][0] == '%')
		{
			res = num1 % num2;
		}
	}
	printf("Result is: %d\n", res);
	return (0);
}
