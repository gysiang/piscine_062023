/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:11:14 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/10 14:40:16 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strrev(char *str)
{
	int	i;
	int	j;
	int	len;
	char		tmp;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Reverse the string
    char *reversed = ft_strrev(str);

    printf("Reversed string: %s\n", reversed);

    return 0;
}
