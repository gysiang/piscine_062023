/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:37:11 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/27 07:28:58 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}	
	s1[i] = '\0';
	return (s1);
}

int	main(int argc, char **argv)
{
	printf("Destination: %s\n", argv[1]);
	printf("Source: %s\n", argv[2]);
	printf("Result: %s\n", ft_strcpy(argv[1],argv[2]));
	return (0);
}
