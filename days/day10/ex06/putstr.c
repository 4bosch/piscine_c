/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 22:39:41 by abosch            #+#    #+#             */
/*   Updated: 2018/07/24 22:35:14 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		put_char(str[i]);
		i++;
	}
}