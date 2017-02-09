/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 10:04:22 by exam              #+#    #+#             */
/*   Updated: 2017/02/07 10:27:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

int		count(int a, char op, int b)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '*')
		return (a * b);
	if (op == '/')
		return (a / b);
	if (op == '%')
		return (a % b);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	operator;

	if (argc != 4)
	{
		printf("%c", '\n');
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = *argv[2];
	printf("%i", count(a, operator, b));
	printf("%c", '\n');
	return (0);
}
