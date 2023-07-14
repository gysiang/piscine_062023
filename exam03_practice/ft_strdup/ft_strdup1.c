/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:28:07 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/07 12:37:31 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		len;
	int		i;

	i = 0;
	len = 0;
	// get the len of the str so can malloc
	while (src[len] != '\0')
	{
		len++;
	}
	result = (char *)malloc(sizeof(char) + (len + 1));
	// if memory allocation fails return null
	if (!result)
		return (NULL);
	// run a loop to copy src into result
	while (len > i)
	{
		result[i] = src[i];
		i++;
	}
	// add a null at the end.
	result[i] = '\0';
	return (result);
}
