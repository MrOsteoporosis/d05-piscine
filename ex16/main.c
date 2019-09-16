/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 14:16:02 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 14:31:35 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[] = "hello\0\0\0\0\0";
	char src[] = "mate";

	printf("%s \n", dest);
	printf("%s \n", src);
	printf("%s", ft_strcat(dest, src));
}
