/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 10:40:34 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 10:43:30 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char str[] = "hellomate";
	char dest[8];
	char *destp;
	int temp;

	destp = &dest[0];
	printf("%s\n", &str[0]);
	printf("%s\n", &dest[0]);
	destp = ft_strncpy(&dest[0], &str[0], 5);

	printf("%s\n", destp);

	temp = 0;
	while (temp < 8)
	{
		printf("%c", dest[temp]);
		temp++;
	}
}
