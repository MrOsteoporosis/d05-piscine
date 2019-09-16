/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 15:34:20 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 15:39:06 by averheij      ########   odam.nl         */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int length;
	unsigned int temp;

	length = ft_strlen(dest);
	temp = 0;
	while (temp < n)
	{
		dest[temp] = src[temp];
		temp = temp + 1;
	}
	while (temp < length)
	{
		dest[temp] = '\0';
	}
	return (dest);
}

int		ft_charmatch(char a, char b)
{
	if (a == b)
	{
		return (1);
	}
	return (0);
}

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int count;
	int length;

	count = 0;
	length = ft_strlen(dest);
	ft_strncpy(&dest[length], src, size - length);
	return (dest);
}
