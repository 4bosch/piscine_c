/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_absent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:17:29 by abosch            #+#    #+#             */
/*   Updated: 2018/07/15 21:37:09 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_absent_col(int *col, int nb)
{
	int cnt;

	cnt = 0;
	while (cnt < 9)
	{
		if (col[cnt] == nb)
			return (0);
		cnt++;
	}
	return (1);
}

int		check_absent_line(int *line, int nb)
{
	int cnt;

	cnt = 0;
	while (cnt < 9)
	{
		if (line[cnt] == nb)
			return (0);
		cnt++;
	}
	return (1);
}

int		check_absent_square(int **square, int nb)
{
	int x_i;
	int y_i;

	x_i = 0;
	y_i = 0;
	while (y_i < 3)
	{
		x_i = 0;
		while (x_i < 3)
		{
			if (square[y_i][x_i] == nb)
				return (0);
			x_i++;
		}
		y_i++;
	}
	return (1);
}
