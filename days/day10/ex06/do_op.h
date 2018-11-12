/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 16:47:11 by abosch            #+#    #+#             */
/*   Updated: 2018/07/24 22:36:13 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

void	put_char(char c);
void	putnbr(int nb);
void	putstr(char *str);
void	add(int a, int b);
void	divid(int a, int b);
void	minus(int a, int b);
void	multi(int a, int b);
void	mod(int a, int b);
int		is_ope(char c);
int		is_args_correct(char **av);
int		atoi(char *str);
void	do_op(char **av, void (*f[]) (int, int));

#endif
