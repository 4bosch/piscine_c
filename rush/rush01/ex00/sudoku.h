/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:31:43 by arebert           #+#    #+#             */
/*   Updated: 2018/07/15 23:39:17 by arebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

int		check_args(int argc, char **argv);
int		get_corr_int(int i);
void	convert_args_2_tab(char **grid, int **tab);
int		check_ini_value(int **grid);
int		check_line(int *line);
int		check_col(int *col);
int		check_square(int **grid);
int		check_absent_line(int *line, int nb);
int		check_absent_col(int *col, int nb);
int		check_absent_square(int **square, int nb);
void	print_grid(int **grid);
void	print_error(void);
void	print_str(char *str);
int		**get_square(int **grid, int x, int y);
int		*get_col(int **grid, int x);
int		is_(int **grid, int position);
#endif
