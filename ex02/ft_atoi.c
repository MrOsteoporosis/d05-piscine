/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 09:33:58 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 10:04:54 by averheij      ########   odam.nl         */
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

int		ft_factor(int length)
{
	int factor;
	int temp;

	factor = 1;
	temp = 1;
	while (temp < length)
	{
		factor = factor * 10;
		temp = temp + 1;
	}
	return (factor);
}

int		ft_atoi(char *str)
{
	int converted;
	int length;
	int factor;
	int temp;

	length = ft_strlen(str);
	factor = ft_factor(length);
	temp = 0;
	if (str[0] == '-')
	{
		temp = temp + 1;
		factor = factor / 10;
	}
	while (temp < length)
	{
		converted = converted + ((str[temp] - 48) * factor);
		temp = temp + 1;
		factor = factor / 10;
	}
	if (str[0] == '-')
	{
		converted = converted * -1;
	}
	return (converted);
}
