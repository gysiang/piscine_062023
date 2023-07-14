/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:39:15 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/05 18:41:52 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str) {
    int j = 0;
    int i = 0;

    while (str[i]) {
        if (str[i] == ' ' && str[i + 1] >= 32 && str[i + 1] <= 126) {
            j = i + 1;
        }
        i++;
    }

    while (str[j] >= 32 && str[j] <= 126) {
        write(1, &str[j], 1);
        j++;
    }
}

int	main(int argc, char **argv) {
    if (argc == 2) {
        last_word(argv[1]);
    }
    write(1, "\n", 1);
    return 0;
}
