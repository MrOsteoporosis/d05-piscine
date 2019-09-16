/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 15:36:19 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 15:39:55 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[] = "hello\0\0\0\0\0\0";
	char src[] = "matseye";

	printf("%s \n", dest);
	printf("%s \n", src);
	printf("%s", ft_strlcat(dest, src, 11));
}
