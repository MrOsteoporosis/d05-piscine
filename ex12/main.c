/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 13:43:38 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 13:44:40 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char str1[] = "12345s6789";

	printf("%s\n", str1);
	printf("%d", ft_str_is_numeric(str1));
}
