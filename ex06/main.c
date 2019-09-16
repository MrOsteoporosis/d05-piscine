/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 11:49:39 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 12:04:56 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char str1[] = "abcd";
	char str2[] = "abCd";

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%d", ft_strcmp(str1, str2));

}