/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 10:32:25 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/25 12:41:31 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char src[] = "Hello";
	char dest[] = "World1";
	char dest1[] = "World2";

	printf("%s", ft_strncpy(dest, src, 3));
	printf("\n%s", strncpy(dest1, src, 3));
	printf("\n%s", ft_strncpy(dest, src, 5));
	printf("\n%s", strncpy(dest1, src, 5));
	printf("\n%s", ft_strncpy(dest, src, 7));
	printf("\n%s", strncpy(dest1, src, 7));
}
*/
