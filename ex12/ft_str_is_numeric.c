/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 13:43:01 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 13:43:28 by averheij      ########   odam.nl         */
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

int		ft_str_is_numeric(char *str)
{
	int temp;
	int length;

	temp = 0;
	length = ft_strlen(str);
	while (temp < length)
	{
		if (!ft_isdigit(str[temp]))
		{
			return (0);
		}
		temp++;
	}
	return (1);
}
