/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:29:31 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/23 15:54:16 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str !=0)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char str[] = "Hello World";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}
