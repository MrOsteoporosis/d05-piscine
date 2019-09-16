/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 12:19:37 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 12:21:43 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char str1[] = "abcd`d{Ddd";

	printf("%s\n", str1);
	printf("%s", ft_strupcase(str1));
}
