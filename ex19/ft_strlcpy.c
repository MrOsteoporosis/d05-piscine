/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 15:44:28 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 15:49:06 by averheij      ########   odam.nl         */
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

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int temp;

	temp = 0;
	while (temp < n)
	{
		dest[temp] = src[temp];
		temp = temp + 1;
	}
	dest[temp] = '\0';
	return (dest);
}
