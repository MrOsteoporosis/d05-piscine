/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 12:23:23 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 12:23:52 by averheij      ########   odam.nl         */
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
