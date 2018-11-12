/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ini_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:56:43 by arebert           #+#    #+#             */
/*   Updated: 2018/07/15 21:48:51 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_ini_value(int **grid)
{
	int x;
	int y;

	x = -1;
	y = -1;
	while (++y < 9)
		if (!check_line(grid[y]))
			return (0);
	while (++x < 9)
		if (!check_col(get_col(grid, x)))
			return (0);
	x = 0;
	y = 0;
	while (y < 9)
	{
		while (x < 9)
		{
			if (!check_square(get_square(grid, x, y)))
				return (0);
			x += 3;
		}
		y += 3;
	}
	return (1);
}
