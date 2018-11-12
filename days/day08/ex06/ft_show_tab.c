/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 14:36:05 by abosch            #+#    #+#             */
/*   Updated: 2018/07/23 15:30:02 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	print_str(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

void	putminint(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		putnbr(-1 * nb);
		return ;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str != 0)
	{
		print_str(par[i].copy);
		ft_putchar('\n');
		putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j] != 0)
		{
			print_str(par[i].tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
