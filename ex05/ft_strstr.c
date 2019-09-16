/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 10:50:33 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 11:31:24 by averheij      ########   odam.nl         */
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

int		ft_charmatch(char a, char b)
{
	if (a == b)
	{
		return (1);
	}
	return (0);
}

int		ft_match(char *str, char *to_find)
{
	int match;
	int length;

	match = 0;
	length = ft_strlen(to_find) - 1;
	if (length == 0)
	{
		return (ft_charmatch(to_find[match], str[match]));
	}
	while (match < length && match > -1)
	{
		match = match + ft_charmatch(to_find[match], str[match]);
		if (!(to_find[match] == str[match]))
		{
			match = -1;
		}
		if (match == length)
		{
			return (1);
		}
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int srclength;
	int c1;

	srclength = ft_strlen(str);
	c1 = 0;
	while (c1 < srclength)
	{
		if (ft_match(str + c1, to_find) == 1)
		{
			return (&str[c1]);
		}
		c1++;
	}
	return (0);
}
