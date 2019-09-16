/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 14:05:57 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 14:07:06 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char str1[] = "HELLOTHISsISUPPERCASE";

	printf("%s\n", str1);
	printf("%d", ft_str_is_uppercase(str1));
}
