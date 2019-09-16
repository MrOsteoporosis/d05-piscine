/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 09:13:22 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 09:28:34 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int count;
	int length;

	count = 0;
	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	while (count < length)
	{
		ft_putchar(str[count]);
		count = count + 1;
	}
	ft_putchar('\n');
}
