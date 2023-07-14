/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 15:17:30 by gyong-si          #+#    #+#             */
/*   Updated: 2023/06/30 15:17:54 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
        {
            if (av[1][i] != ' ' && av[1][i] != '\t')
            {
                ft_putchar(av[1][i]);
                i++;
            }
            else
            {
                break;
            }
        }
    }
    ft_putchar('\n');
    return 0;
}
