/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 09:33:58 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 16:37:37 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(char c)
{
	char	digits[11];
	int		temp;

	digits[0] = '-';
	digits[1] = '0';
	temp = 1;
	while (temp < 11)
	{
		digits[temp] = digits[temp - 1] + 1;
		temp++;
	}
	temp = 0;
	while (temp < 11)
	{
		if (c == digits[temp])
		{
			return (1);
		}
		temp++;
	}
	return (0);
}

int		ft_trimtodigits(char *str)
{
	int i;

	i = 0;
	while (!(ft_isdigit(str[i])) && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int converted;
	int sign;
	int i;

	converted = 0;
	sign = 1;
	i = ft_trimtodigits(str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (sign * converted);
		}
		converted = converted * 10 + str[i] - '0';
		i++;
	}
	return (sign * converted);
}
