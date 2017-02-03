/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 11:16:34 by exam              #+#    #+#             */
/*   Updated: 2017/01/31 12:01:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		wdmatch(char *target, char *area)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (area[j] != '\0')
	{
		if (target[i] == area[j])
		{
			i++;
			j++;
		}
		else
			j++;
	}
	if (i == ft_strlen(target))
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*string;
	char	*task;

	i = 0;
	task = argv[1];
	string = argv[2];
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	if (wdmatch(task, string) == 1)
	{
		ft_putstr(task);
		ft_putchar('\n');
		return (0);
	}
	else
		ft_putchar('\n');
	return (0);
}
