/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:35:25 by augay             #+#    #+#             */
/*   Updated: 2018/07/08 16:15:24 by augay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_one_line(int x, char left, char middle, char right)
{
	int		len_line;

	if (x <= 0)
		return ;
	else if (x == 1)
		ft_putchar(left);
	else
	{
		len_line = 0;
		ft_putchar(left);
		while (len_line < x - 2)
		{
			ft_putchar(middle);
			len_line++;
		}
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int height;

	height = 0;
	if (y <= 0)
		return ;
	ft_print_one_line(x, 'A', 'B', 'A');
	if (y > 1)
	{
		while (height < y - 2)
		{
			ft_print_one_line(x, 'B', ' ', 'B');
			height++;
		}
		ft_print_one_line(x, 'C', 'B', 'C');
	}
}
