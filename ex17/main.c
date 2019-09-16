/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 14:36:31 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 14:37:06 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char dest[] = "hello\0\0\0\0\0";
	char src[] = "mate";

	printf("%s \n", dest);
	printf("%s \n", src);
	printf("%s", ft_strncat(dest, src, 3));
}
