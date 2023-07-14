/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:54:43 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/12 19:16:06 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

void splitString(char *str, char **splitarray)
{
    int i = 0;
    int k = 0;
    int j = 0;

    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        
        j = 0;
        while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\0'))
        {
            splitarray[k][j] = str[i];
            j++;
            i++;
        }
        
        splitarray[k][j] = '\0';
        k++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int len = ft_strlen(av[1]);
        char **res = (char **)malloc(sizeof(char *) * (len + 1));

        if (res == NULL) {
            perror("Memory allocation failed");
            return 1;
        }

        int wordCount = 0;
        int i;

        for (i = 0; av[1][i] != '\0'; i++) {
            if ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i + 1] != ' ' 
		&& av[1][i + 1] != '\t') 
	  {
                wordCount++;
            }
        }

        wordCount++; // Account for the last word

        for (i = 0; i < wordCount; i++) {
            res[i] = (char *)malloc(sizeof(char) * (len + 1));

            if (res[i] == NULL) {
                perror("Memory allocation failed");
                return 1;
            }
        }

        splitString(av[1], res);

        for (i = 0; i < wordCount; i++) {
            free(res[i]);
        }
        free(res);

	 printf("Words in reverse order:\n");
    	for (int i = wordCount - 1; i >= 0; i--) {
        	printf("%s\n", res[i]);
    	}
    }

    write(1, "\n", 1);
    return 0;
}


