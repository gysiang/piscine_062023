/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:46:24 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/10 18:14:17 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	str_capitalizer(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
        	str[i] -= 32;

    	while (str[i] != '\0')
    	{
        	i++;
        	if (str[i] >= 'A' && str[i] <= 'Z')
        	{
            		str[i] += 32;
        	}
        	if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' 
			|| str[i - 1] == '\t'))
        	{
            		str[i] -= 32;
        	}
    	}
    	write(1, str, ft_strlen(str));
}

int	main(int argc, char *argv[])
{
	int	i;

    	if (argc < 2)
    	{
            write(1, "\n", 1);
            return (0);
    	}
    	else
    	{
        	i = 1;
        	while (i < argc)
        	{
            		str_capitalizer(argv[i]);
            		write(1, "\n", 1);
            		i = i + 1; 
        	}
    	}
    	return 0;
}
