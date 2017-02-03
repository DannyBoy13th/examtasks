/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 10:04:56 by exam              #+#    #+#             */
/*   Updated: 2017/01/31 10:39:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rotone(char input)
{
	int i;

	i = 0;
	if (input >= 65 && input <= 89)
		return (input + 1);
	if (input >= 97 && input <= 121)
		return (input + 1);
	if (input == 90 || input == 122)
		return (input - 25);
	else
		return (input);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*string;

	i = 0;
	string = argv[1];
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (string[i] != '\0')
	{
		ft_putchar(rotone(string[i]));
		i++;
	}
	ft_putchar('\n');
	return (0);
}
