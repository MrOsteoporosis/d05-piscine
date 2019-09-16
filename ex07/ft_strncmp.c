/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 12:09:14 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 12:10:09 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				difference;
	unsigned int	temp;

	difference = 0;
	temp = 0;
	while (temp < n)
	{
		difference += s1[temp] - s2[temp];
		temp++;
	}
	return (difference);
}
