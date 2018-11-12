/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:01:12 by llejeune          #+#    #+#             */
/*   Updated: 2018/07/15 22:06:35 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		putchar(str[i]);
}

void	print_grid(int **grid)
{
	int x;
	int y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			putchar(grid[y][x] + '0');
			putchar(' ');
			x++;
		}
		putchar('\n');
		y++;
	}
}

void	print_error(void)
{
	print_str("Error\n");
}
