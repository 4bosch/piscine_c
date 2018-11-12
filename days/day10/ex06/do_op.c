/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 16:20:24 by abosch            #+#    #+#             */
/*   Updated: 2018/07/24 22:22:24 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	do_op(char **av, void (*f[])(int, int))
{
	if (*av[2] == '+')
	{
		f[0](atoi(av[1]), atoi(av[3]));
		return ;
	}
	else if (*av[2] == '-')
	{
		f[1](atoi(av[1]), atoi(av[3]));
		return ;
	}
	else if (*av[2] == '*')
	{
		f[2](atoi(av[1]), atoi(av[3]));
		return ;
	}
	else if (*av[2] == '/')
	{
		f[3](atoi(av[1]), atoi(av[3]));
		return ;
	}
	else if (*av[2] == '%')
	{
		f[4](atoi(av[1]), atoi(av[3]));
		return ;
	}
}
