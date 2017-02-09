/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 10:29:54 by exam              #+#    #+#             */
/*   Updated: 2017/02/07 10:57:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char c)
{
	if (c == ' ' || c == '	')
		return (0);
	else
		return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (ft_check(str[i]) == 0)
	{
		i--;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	i = 0;
	j = ft_strlen(str);
	while (i != j + 1)
	{
		if (ft_check(str[i]) == 1)
			ft_putchar(str[i]);
		if (ft_check(str[i]) == 0 && ft_check(str[i - 1]) == 1 && i != 0)
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	return (0);
}
