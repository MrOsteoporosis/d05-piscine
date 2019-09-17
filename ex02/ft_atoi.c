/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 09:33:58 by averheij       #+#    #+#                */
/*   Updated: 2019/09/17 12:15:36 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_trimwhitespace(char *str)
{
	int i;

	i = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
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
	i = ft_trimwhitespace(str);
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
