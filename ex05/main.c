/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 10:48:41 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 11:30:30 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "hello this is a nice string yo";
	char needle[] = "this";
	char *destp;

	destp = &needle[0];
	printf("%s\n", &str[0]); 
	printf("%s\n", &needle[0]);

	destp = ft_strstr(&str[0], &needle[0]);
	printf("%s\n", destp);
}
