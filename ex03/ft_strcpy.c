/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 10:18:54 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 10:23:11 by averheij      ########   odam.nl         */
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

char	*ft_strcpy(char *dest, char *src)
{
	int length;
	int temp;

	length = ft_strlen(src);
	temp = 0;
	while (temp < length)
	{
		dest[temp] = src[temp];
		temp = temp + 1;
	}
	return (dest);
}
