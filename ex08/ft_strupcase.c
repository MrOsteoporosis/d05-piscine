/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 12:12:57 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 12:20:51 by averheij      ########   odam.nl         */
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

char	*ft_strupcase(char *str)
{
	int difference;
	int length;
	int temp;

	difference = 0;
	length = ft_strlen(str);
	temp = 0;
	while (temp < length)
	{
		if (str[temp] > 96 && str[temp] < 123)
		{
			str[temp] -= 32;
		}
		temp++;
	}
	return (str);
}
