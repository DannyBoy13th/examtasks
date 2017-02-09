/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 11:38:21 by exam              #+#    #+#             */
/*   Updated: 2017/02/07 13:42:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"

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

void	rev(char *str)
{
	int i;
	int j;

	i = ft_strlen(str);
	while (i > -2)
	{
		if (str[i] != ' ' && str[i] != '	')
			i--;
		if (str[i] == ' ' || str[i] == '	' || i == -1)
		{
			j = i + 1;
			while (str[j] != '\0' && str[j] != ' ' && str[j] != '	')
			{
				ft_putchar(str[j]);
				j++;
			}
			if (i != -1)
				ft_putchar(' ');
			i--;
		}
	}
}

int		main(int argc, char **argv)
{
	char *str;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	rev(str);
	ft_putchar('\n');
	return (0);
}
