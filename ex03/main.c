/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 10:19:23 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 10:33:04 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char str[] = "hellomate";
	char dest[10];
	char *destp;
	int temp;

	destp = &dest[0];
	printf("%s\n", &str[0]);
	printf("%s\n", &dest[0]);
	destp = ft_strcpy(&dest[0], &str[0]);

	printf("%s\n", destp);
	printf("%c\n", *(str - 1));


	temp = 0;
	while (temp < 9)
	{
		printf("%c", dest[temp]);
		temp++;
	}
}
