/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/17 14:28:01 by averheij       #+#    #+#                */
/*   Updated: 2019/09/17 15:21:35 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

int		ft_putnbr_base(int nbr, char *base)
{
	int baseno;
	int conv;

	baseno = ft_strlen(base);
	conv = 0;
	if (nbr / baseno)
		conv = ft_putnbr_base(nbr / baseno, base);
	printf("%d \n", conv);
	conv = conv * 100 + (base[nbr % baseno]);
	return (conv);
}

int		ft_atoi(char *str)
{
	int converted;
	int sign;
	int i;

	converted = 0;
	sign = 1;
	i = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (sign * converted);
		converted = converted * 10 + str[i] - '0';
		i++;
	}
	return (sign * converted);
}

int		ft_atoi_base(char *str, char *base)
{
	int nb;
	int negative;
	int temp;
	int pow;

	nb = ft_atoi(str);
	negative = 0;
	if (nb < 0)
	{
		negative = 1;
		nb = -nb;
	}
	nb = ft_putnbr_base(nb, base);
	if (negative)
	{
		temp = nb;
		pow = 1;
		while (temp / 10)
		{
			pow *= 100;
			temp /= 100;
		}
		nb = nb + ('-' * pow);
	}
	return (nb);
}
