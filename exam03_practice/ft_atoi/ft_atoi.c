/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:26:39 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/04 15:51:14 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
1. check for whitespaces and control characters
2. if there are any - sign increment it
3. check if the first char is between '0' o '9'
4. use
*/
int	ft_atoi(const char *s)
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

int main() {
    const char *str = "-12345";
    
    int result = ft_atoi(str);
    
    printf("Converted integer: %d\n", result);
    
    return 0;
}
