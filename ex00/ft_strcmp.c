/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 09:15:21 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/27 09:25:29 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while(s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	printf("%d", ft_strcmp("Hello", "Hello1"));
	printf("\n%d", ft_strcmp("Hello", "He"));
	printf("\n%d", ft_strcmp("He", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}

/*

       strcmp() returns an integer indicating the result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.
*/
