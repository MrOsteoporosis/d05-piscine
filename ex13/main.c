/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 14:02:07 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 14:04:29 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char str1[] = "hellSothisislowercase";

	printf("%s\n", str1);
	printf("%d", ft_str_is_lowercase(str1));
}
