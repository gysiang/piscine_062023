/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:38:41 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/11 17:54:44 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	
	i = 7;
	while (i >= 0)
	{
		unsigned char mask;
		unsigned char bit;
		char bitChar;

		mask = 1 << i;
		bit = (octet & mask) >> i;
		bitChar = bit + '0';
		write(1, &bitChar, 1);
		i--;
	}
}

int	main(void)
{
	unsigned char byte = 170;
	printf("Binary representation of %u: ", byte);
	print_bits(byte);
	printf("\n");
	return (0);
}
