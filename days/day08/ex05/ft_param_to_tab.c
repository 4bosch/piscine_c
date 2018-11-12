/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 17:03:59 by abosch            #+#    #+#             */
/*   Updated: 2018/07/20 13:43:59 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	int			i;

	i = 0;
	if (!(tab = (t_stock_par*)malloc(sizeof(*tab) * ac + 1)))
		return (NULL);
	while (i < ac)
	{
		tab[i].size_param = str_length(av[i]);
		tab[i].str = *(av + i);
		tab[i].copy = av[i];
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
