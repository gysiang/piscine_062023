/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:59:54 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/09 13:33:59 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
1. char is separator checks if c is part of charset, return 1 if true
2. count words counts the words by using the charset as a condition
3. write word copies the word without the separator
*/
int	check_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}
/*
count words goes through each word in the str, if current char is seperator
and next char is not, etc. ",hello" , is separator and h is not, it will add
one to a counter. This function returns the number of words in the string.
*/

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_separator(str[i + 1], charset) == 1
			&& check_separator(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (check_separator(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}
/*
write split function splits the word by charset and then uses the write
word function to copy and to save it into the array called split and
adds a null terminator to show it's the end of the word.
*/

void	write_split(char **split, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (check_separator(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}
/*
res is an array created to store the words after splitting from the seperator
words is used to store the number of words in the string
This function creates an array and allocated memory based on length of the words
Adds a 0 at the end of the array and then returns an array with the split words
etc res = ["Hello", "World, "this", "is", "a", "test"]
*/

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	words = count_words(str, charset);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res[words] = 0;
	write_split(res, str, charset);
	return (res);
}

int main()
{
	char str[] = "Hello,World!This,is,a,test";
    	char charset[] = ",!";

	// Split the string
    	char **split = ft_split(str, charset);

    	// Print the split words
    	printf("Split words:\n");
    	for (int i = 0; split[i] != NULL; i++) {
        	printf("%s\n", split[i]);
   	 }

    	// Free allocated memory
    	for (int i = 0; split[i] != NULL; i++) {
        	free(split[i]);
    	}
    	free(split);
    	return 0;
}
