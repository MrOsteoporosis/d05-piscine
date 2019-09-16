/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 13:40:49 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 13:41:53 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char str1[] = "hellothi123isalpha";

	printf("%s\n", str1);
	printf("%d", ft_str_is_alpha(str1));
}
