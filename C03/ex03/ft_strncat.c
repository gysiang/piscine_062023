/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:28:44 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/28 13:27:01 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && nb > 0)
	{
		dest[i + j] = src[j];
		nb--;
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main()
{
	char	src[] = "Singapore";
	char	dest[] = "42 ";
	printf("%s", ft_strncat(dest, src, 30));
} */
