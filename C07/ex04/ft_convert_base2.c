/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:18:08 by gyong-si          #+#    #+#             */
/*   Updated: 2023/07/04 10:06:23 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1. ft_strlen returns a count on the length of a str
2. new string function convers a int data type to str data type
	- int n and starts to allocate memory for
	- if memory allocation fails, return null
	- adds in null operator to the end of string
	- return back new which is now a string
3. reverse function reverses the string and returns it
	- start a loop from 0 to middle of the string
	- save str[i]  in a temp variable and swap with the char at the end
	- this is the same as ft_swap
	- increment the loop until it reaches half of the str len
4. append function adds char c into the string and adds in null operator
5. decimal to base function converts a decimal to a specific base no
*/
int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*new_string(int n)
{
	char	*new;

	new = (char *)malloc((n + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	new[n] = '\0';
	return (new);
}

char	*reverse(char *str)
{
	int	i;
	int	len;
	char		aux;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		aux = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i ] = aux;
		i++;

	}
	return (str);
}

char	*append(char *str, char c)
{
	int	i;

	i = ft_strlen(str);
	str[i] = c;
	str[i + 1] = '\0';
	return (str); 
}

char	*decimal_to_base(long int n, char *base)
{
	char	*res;
	int		base_size;
	int		is_negative;

	res = new_string(50);
	is_negative = 0;
	base_size = ft_strlen(base);
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}
	if (n == 0)
		res = append(res, base[0]);
	else
	{
		while (n > 0)
		{
			res = append(res, base[n % base_size]);
			n /= base_size;
		}
		if (is_negative)
			res = append(res, '-');
	}
	return (reverse(res));
}
