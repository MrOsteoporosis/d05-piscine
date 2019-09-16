/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 09:22:22 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 09:26:01 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int temp;
	int factor;

	factor = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	temp = nb;
	while (temp)
	{
		temp = temp / 10;
		factor = factor * 10;
	}
	if (nb == 0)
	{
		ft_putchar('0');
	}
	while (factor > 1)
	{
		factor = factor / 10;
		ft_putchar('0' + (nb / factor) - ((nb / (factor * 10)) * 10));
	}
	ft_putchar('\n');
}
