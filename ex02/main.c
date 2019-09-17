/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 09:34:32 by averheij       #+#    #+#                */
/*   Updated: 2019/09/17 12:15:50 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	char str[] = "  	 -2147483647codam01";

	printf("%s\n", &str[0]);
	printf("%d\n", ft_atoi(&str[0]));
}
