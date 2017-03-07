/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 10:48:40 by exam              #+#    #+#             */
/*   Updated: 2017/03/07 11:26:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

int		fprime(unsigned int num)
{
	int i;

	i = 2;
	while (num % i)
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	unsigned int i;
	unsigned int j;

	if (argc != 2)
	{
		printf("%c", '\n');
		return (0);
	}
	i = atoi(argv[1]);
	if (i == 1)
		printf("%i\n", i);
	while (i != 1)
	{
		j = fprime(i);
		if (i != j)
			printf("%i%c", j, '*');
		else
			printf("%i\n", j);
		i /= j;
	}
	return (0);
}
