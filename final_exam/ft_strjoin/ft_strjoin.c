/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:14:50 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/13 16:01:51 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that will concatenate all the strings pointed by strs separated by
sep.
• size is the number of strings in strs
• if size is 0, you must return an empty string that you can free().
*/

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

char *ft_strcpy(char *dest, char *src)
{
    int index = 0;

    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}

int ft_total_length(char **str, int size, int sep_length)
{
    int final_length = 0;
    int index = 0;

    while (index < size)
    {
        final_length += ft_strlen(str[index]);
        final_length += sep_length;
        index++;
    }
    final_length -= sep_length;
    return final_length;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int full_length;
    int index;
    char *str;

    // if size is 0, return an empty string that I can free
    if (size == 0)
    {
        char *empty = (char *)malloc(sizeof(char));
        empty[0] = '\0';
        return empty;
    }

    // get the total length of the string including the separator
    full_length = ft_total_length(strs, size, ft_strlen(sep));

    // allocate memory for the string
    str = (char *)malloc((full_length + 1) * sizeof(char));
    if (!str)
        return NULL;
    index = 0;
    while (index < size)
    {
        ft_strcpy(str, strs[index]);
        str += ft_strlen(strs[index]);
        if (index < size - 1)
        {
            ft_strcpy(str, sep);
            str += ft_strlen(sep);
        }
        index++;
    }
    *str = '\0';

    return str - full_length;
}

int main()
{
    // Test the ft_strjoin function
    char *strs[] = {"Hello", "world", "!", "Welcome", "to", "OpenAI"};
    char *sep = " ";
    int size = sizeof(strs) / sizeof(strs[0]);

    char *result = ft_strjoin(size, strs, sep);
    printf("Result: %s\n", result);

    free(result);

    return 0;
}
