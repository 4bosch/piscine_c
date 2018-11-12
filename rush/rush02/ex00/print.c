/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:03:24 by abosch            #+#    #+#             */
/*   Updated: 2018/07/22 10:37:57 by augay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print(int cnt, int x, int y)
{
	ft_putstr("[colle-0");
	ft_putnbr(cnt);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] ");
}

void	printor(void)
{
	ft_putstr("|| ");
}

void	finalprint(int *tab, int x, int y)
{
	int cnt;
	int is_previous;

	cnt = 0;
	while (cnt < 5)
		if (tab[cnt++] == -1)
		{
			ft_putstr("Memory Error\n");
			return ;
		}
	is_previous = 0;
	cnt = -1;
	while (++cnt < 5)
	{
		if (is_previous && tab[cnt])
			printor();
		if (tab[cnt])
		{
			print(cnt, x, y);
			is_previous = 1;
		}
	}
	if (is_previous == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}
