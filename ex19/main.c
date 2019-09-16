/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 15:47:00 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 15:50:29 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[] = "hello";
	char src[] = "mat";

	printf("%s \n", dest);
	printf("%s \n", src);
	printf("%s", ft_strlcpy(dest, src, 5));
}
