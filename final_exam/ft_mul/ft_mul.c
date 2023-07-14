/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:26:41 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/09 15:35:49 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_mul(int *a, int b)
{
	*a *= b;
}

#include <stdio.h>

int main(void) {
    int a = 3;
    int b = 2;

    ft_mul(&a, b);
    printf("The result is: %d\n", a);

    return 0;
}
