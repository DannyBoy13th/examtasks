/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 13:17:23 by exam              #+#    #+#             */
/*   Updated: 2017/01/31 13:52:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		space(char s)
{
	if (s == ' ' || s == '	')
		return (1);
	else
		return (0);
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

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	str = argv[1];
	j = ft_strlen(str) - 1;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (space(str[j]) != 0)
		j--;
	while (i < j + 1)
	{
		if (space(str[i]) == 0)
			ft_putchar(str[i]);
		if (space(str[i]) == 1 && space(str[i - 1]) == 0 && i != 0)
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	return (0);
}
