/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/17 14:53:09 by averheij       #+#    #+#                */
/*   Updated: 2019/09/17 15:20:52 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	printf("%d", ft_atoi_base("-50", "0123456789ABCDEF"));
}
