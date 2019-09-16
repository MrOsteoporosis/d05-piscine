/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 12:42:33 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 13:34:33 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

int		ft_islpha(char c)
{
	char	alphabet[52];
	int		temp;

	alphabet[0] = 'A';
	alphabet[26] = 'a';
	temp = 1;
	while (temp < 26)
	{
		alphabet[temp] = alphabet[temp - 1] + 1;
		alphabet[temp + 26] = alphabet[temp - 1 + 26] + 1;
		temp++;
	}
	temp = 0;
	while (temp < 52)
	{
		if (c == alphabet[temp])
		{
			return (1);
		}
		temp++;
	}
	return (0);
}

int		ft_isdigit(char c)
{
	char	digits[10];
	int		temp;

	digits[0] = '0';
	temp = 1;
	while (temp < 10)
	{
		digits[temp] = digits[temp - 1] + 1;
		temp++;
	}
	temp = 0;
	while (temp < 10)
	{
		if (c == digits[temp])
		{
			return (1);
		}
		temp++;
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int difference;
	int length;
	int temp;

	difference = 0;
	length = ft_strlen(str);
	temp = 0;
	while (temp < length)
	{
		if (str[temp] > 64 && str[temp] < 91)
		{
			str[temp] += 32;
		}
		temp++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int difference;
	int length;
	int t;

	difference = 0;
	length = ft_strlen(str);
	ft_strlowcase(str);
	if (ft_islpha(str[0]) && str[0] > 96 && str[0] < 123)
	{
		str[0] -= 32;
	}
	t = 1;
	while (t < length)
	{
		if (!ft_islpha(str[t - 1]) && !ft_isdigit(str[t - 1]))
		{
			if(str[t] > 96 && str[t] < 123)
			{
				str[t] -= 32;
			}
		}
		t++;
	}
	return (str);
}
