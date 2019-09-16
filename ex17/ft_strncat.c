/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 14:36:11 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 14:36:27 by averheij      ########   odam.nl         */
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

char	*ft_strncat(char *dest, char *src, int nb)
{
	int count;
	int length;

	count = 0;
	length = ft_strlen(dest) + 1;
	while (count < length)
	{
		if (ft_charmatch('\0', dest[count]))
		{
			ft_strncpy(&dest[count], src, nb);
		}
		count++;
	}
	return (dest);
}
