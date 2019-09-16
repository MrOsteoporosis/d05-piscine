/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 14:10:38 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 14:12:11 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char str1[] = "auydvwodhacoij\01,019238a-d@!()!@*)($*)";

	printf("%s\n", str1);
	printf("%d", ft_str_is_printable(str1));
}
