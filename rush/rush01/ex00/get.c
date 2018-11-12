/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:21:13 by abosch            #+#    #+#             */
/*   Updated: 2018/07/15 23:40:53 by arebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudoku.h"

int		**get_square(int **grid, int x, int y)
{
	int **square;
	int i;
	int x_i;
	int y_i;

	i = -1;
	y_i = -1;
	square = (int **)malloc(3 * sizeof(int *));
	while (++i < 3)
		square[i] = (int*)malloc(3 * sizeof(int));
	while (++y_i < 3)
	{
		x_i = -1;
		while (++x_i < 3)
		{
			square[y_i][x_i] = grid[get_corr_int(y)+y_i][get_corr_int(x)+x_i];
		}
	}
	return (square);
}

int	get_corr_int(int i)
{
	if (i < 3)
		return (0);
	if (i > 5)
		return (6);
	return (3);
}

int		*get_col(int **grid, int x)
{
	int cnt;
	int *col;

	col = (int*)malloc(sizeof(int) * 9);
	cnt = 0;
	while (cnt < 9)
	{
		col[cnt] = grid[cnt][x];
		cnt++;
	}
	return (col);
}
