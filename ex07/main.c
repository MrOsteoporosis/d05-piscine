/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 12:10:25 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 12:11:41 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char str1[] = "abcddDdd";
	char str2[] = "abcddddd";

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%d", ft_strncmp(str1, str2, 5));
}
