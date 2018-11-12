#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sudoku.h"
#include <unistd.h>

void	print_list(int tab[9])
{
	int i;
	char c;

	i = 0;
	while (i < 9)
	{
		c = tab[i] + '0';
		write(1, &c,1);
		i++;
	}
}

void	print_square(int **tab)
{
	int i;
	int j;
	char c;

	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
		}
		write(1, "\n",2);
	}
}

int		main(int argc, char **argv)
{
	int i;
	int **grid;

	i = -1;
	grid = (int **)malloc(9 * sizeof(int *));
	while (++i < 9)
		grid[i] = (int*)malloc(9 * sizeof(int));
	if (!check_args(argc,argv))
	{
		print_error();
		return (0);
	}
	convert_args_2_tab(argv, grid);
	print_grid(grid);
	if (!check_ini_value(grid))
	{
		print_error();
		return (0);
	}
	printf("\n%d\n", is_(grid, 0));
}
