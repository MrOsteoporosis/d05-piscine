/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 12:41:25 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 13:35:44 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quassrante-deux; cinquante+et+un";

	printf("%s\n", str1);
	printf("%s", ft_strcapitalize(str1));
}
