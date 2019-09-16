/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 13:36:25 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 13:41:08 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_str_is_alpha(char *str)
{
	int temp;
	int length;

	temp = 0;
	length = ft_strlen(str);
	while (temp < length)
	{
		if (!ft_islpha(str[temp]))
		{
			return (0);
		}
		temp++;
	}
	return (1);
}
