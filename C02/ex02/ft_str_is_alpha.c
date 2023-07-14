/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:43:00 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/28 09:22:50 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int    main(void)
{
    int is_alpha;
    char a[] = "112";
    is_alpha = ft_str_is_alpha(a);
    printf("%d\n", is_alpha);
}*/
