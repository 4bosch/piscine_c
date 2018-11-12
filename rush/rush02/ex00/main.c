/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:18:13 by augay             #+#    #+#             */
/*   Updated: 2018/07/08 16:14:16 by augay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

int	ft_check(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\n' || c == ' ')
	{
		return (0);
	}
	else if (c == '-')
	{
		return (-1);
	}
	else if (c == '+')
	{
		return (1);
	}
	return (2);
}

int	ft_atoi(char *str)
{
	int i;
	int signe;
	int s;

	i = 0;
	signe = 1;
	s = 0;
	while (ft_check(str[i]) == 0)
		i++;
	if (ft_check(str[i]) == -1)
	{
		signe = -1;
		i++;
	}
	else if (ft_check(str[i]) == 1)
	{
		signe = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && i < ft_strlen(str))
	{
		s = s * 10 + str[i] - 48;
		i++;
	}
	return (s * signe);
}

int	main(int argc, char **argv)
{
	(void)argc;
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
