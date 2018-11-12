/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 15:59:28 by mthoman           #+#    #+#             */
/*   Updated: 2018/07/21 18:24:15 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);
void	ft_store_one_line(int x, char *sym, int pos, char *out);
void	ft_gen(int x, int y, char *c, char *out);
int		comp_0on(char *in, int col, int ligne, char *s);
void	print(int cnt, int x, int y);
void	printor(void);
void	take_xy(int *x, int *y, char *str);
void	finalprint(int *tab, int x, int y);
char	*get_input(void);
char	*alloc_more(char *buff, unsigned int size, unsigned int new_size);
void	all_comp(int x, int y, int *tab, char *s);
void	rush(int x, int y);

#endif
