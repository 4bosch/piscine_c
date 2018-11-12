/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 15:01:07 by arebert           #+#    #+#             */
/*   Updated: 2018/07/15 23:10:13 by arebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>
#include <stdio.h>

int		is_(int **grid, int position)
{
	int cnt;
	int x;
	int y;
	
	print_grid(grid);
	write(1, "\n", 1);
	y = position / 9;
	x = position % 9;
	if (x == 9 && y == 9)
		return (1);
	if (grid[y][x] != 0)
		return (is_(grid, position + 1));
	cnt = 1;
	while (cnt < 10)
	{
		if (check_absent_line(grid[y], cnt) &&
				check_absent_col(get_col(grid, x), cnt) &&
				check_absent_square(get_square(grid, x, y), cnt))
		{
			printf("%d:%d\n", x, y);
			grid[y][x] = cnt;
			if (is_(grid, position + 1))
				return (1);
		}
		cnt++;
	}
	grid[y][x] = 0;
	return (0);
}
