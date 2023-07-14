/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:13:15 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/07 14:13:24 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i;
    unsigned char bit;

    i = 8;
    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}

int main()
{
    unsigned char octet = 127;
    write(1, "Octet: ", 7);
    print_bits(octet);
    write(1, "\n", 1);

    return 0;
}
