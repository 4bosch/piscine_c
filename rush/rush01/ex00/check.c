/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:18:59 by abosch            #+#    #+#             */
/*   Updated: 2018/07/15 21:37:24 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check_col(int *col)
{
	int number;
	int count;
	int value_at;

	number = 1;
	while (number <= 9)
	{
		count = 0;
		value_at = 0;
		while (col[value_at++])
			if (col[value_at] == number)
				count++;
		if (count > 1)
			return (0);
		number++;
	}
	return (1);
}

int		check_line(int *line)
{
	int number;
	int count;
	int value_at;

	number = 1;
	while (number <= 9)
	{
		count = 0;
		value_at = 0;
		while (line[value_at++])
			if (line[value_at] == number)
				count++;
		if (count > 1)
			return (0);
		number++;
	}
	return (1);
}

int		check_square(int **square)
{
	int number;
	int counter;
	int x_i;
	int y_i;

	number = 0;
	x_i = 0;
	y_i = 0;
	while (++number <= 9)
	{
		counter = 0;
		while (y_i < 3)
		{
			x_i = -1;
			while (++x_i < 3)
			{
				if (square[y_i][x_i] == number)
					counter++;
			}
			y_i++;
		}
		if (counter > 1)
			return (0);
	}
	return (1);
}
