/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:24:20 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/11 14:51:50 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	char		temp;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>

char *ft_strrev(char *str);

int main()
{
    char str[] = "Hello, world!";
    printf("Original string: %s\n", str);

    ft_strrev(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

