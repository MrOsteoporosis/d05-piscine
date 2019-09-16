/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 12:24:00 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 12:24:46 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str1[] = "abDSaDWd`@d{[Ddd";

	printf("%s\n", str1);
	printf("%s", ft_strlowcase(str1));
}
