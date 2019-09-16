/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 14:08:36 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 14:12:01 by averheij      ########   odam.nl         */
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

int		ft_isprint(char c)
{
	char	alphabet[95];
	int		temp;

	alphabet[0] = ' ';
	temp = 1;
	while (temp < 95)
	{
		alphabet[temp] = alphabet[temp - 1] + 1;
		temp++;
	}
	temp = 0;
	while (temp < 95)
	{
		if (c == alphabet[temp])
		{
			return (1);
		}
		temp++;
	}
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int temp;
	int length;

	temp = 0;
	length = ft_strlen(str);
	while (temp < length)
	{
		if (!ft_isprint(str[temp]))
		{
			return (0);
		}
		temp++;
	}
	return (1);
}
