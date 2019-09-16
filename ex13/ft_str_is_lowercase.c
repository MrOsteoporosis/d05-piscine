/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 14:02:36 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 14:04:22 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_islcalpha(char c)
{
	char	alphabet[26];
	int		temp;

	alphabet[0] = 'a';
	temp = 1;
	while (temp < 26)
	{
		alphabet[temp] = alphabet[temp - 1] + 1;
		temp++;
	}
	temp = 0;
	while (temp < 26)
	{
		if (c == alphabet[temp])
		{
			return (1);
		}
		temp++;
	}
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int temp;
	int length;

	temp = 0;
	length = ft_strlen(str);
	while (temp < length)
	{
		if (!ft_islcalpha(str[temp]))
		{
			return (0);
		}
		temp++;
	}
	return (1);
}