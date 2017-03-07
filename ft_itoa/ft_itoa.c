/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 12:00:02 by exam              #+#    #+#             */
/*   Updated: 2017/02/14 18:21:23 by dsoloshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

int		count_chars(int num)
{
	int i;

	i = 1;
	if (num < 0)
	{
		num = num * -1;
		i++;
	}
	while (num > 9)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	int_to_char(int a)
{
	char	c;
	int		b;

	b = 0;
	c = 48;
	while (b != a)
	{
		b++;
		c++;
	}
	return (c);
}

char	*min_max(int num)
{
	char *res1;
	char *res2;

	res1 = "-2147483648";
	res2 = "2147483647";
	if (num == -2147483648)
		return (res1);
	if (num == 2147483647)
		return (res2);
	else
		return (NULL);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		ijk[3];

	ijk[0] = count_chars(nbr);
	res = malloc(ijk[0] + 1);
	ijk[1] = ijk[0];
	if (min_max(nbr) != NULL)
		return (min_max(nbr));
	if (nbr < 0)
	{
		nbr = nbr * -1;
		res[0] = '-';
	}
	ijk[0] = ijk[0] - 1;
	while (ijk[0] != 0)
	{
		ijk[2] = nbr % 10;
		nbr = nbr / 10;
		res[ijk[0]] = int_to_char(ijk[2]);
		ijk[0]--;
	}
	if (res[ijk[0]] != '-')
		res[ijk[0]] = int_to_char(nbr);
	res[ijk[1]] = '\0';
	return (res);
}

int		main(void)
{
	int a;
	int b;
	int c;

	a = -2147483648;
	b = 2147483647;
	c = 3522345;
	printf("%s", ft_itoa(a));
	printf("%c", '\n');
	printf("%s", ft_itoa(b));
	printf("%c", '\n');
	printf("%s", ft_itoa(c));
	printf("%c", '\n');
	return (0);
}
