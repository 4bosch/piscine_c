/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 17:10:02 by abosch            #+#    #+#             */
/*   Updated: 2018/07/24 22:34:58 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		is_ope(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	void (*fun_tab[5])(int, int);

	fun_tab[0] = add;
	fun_tab[1] = minus;
	fun_tab[2] = multi;
	fun_tab[3] = divid;
	fun_tab[4] = mod;
	if (ac != 4)
		return (-1);
	if (!is_ope(*av[2]))
	{
		put_char('0');
		put_char('\n');
	}
	else
	{
		do_op(av, fun_tab);
		put_char('\n');
	}
	return (0);
}
