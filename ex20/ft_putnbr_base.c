/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/17 13:36:04 by averheij       #+#    #+#                */
/*   Updated: 2019/09/17 14:07:59 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int baseno;

	baseno = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr / baseno)
		ft_putnbr_base(nbr / baseno, base);
	ft_putchar(base[nbr % baseno]);
}
