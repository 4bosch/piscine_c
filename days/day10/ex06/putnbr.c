/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 00:13:47 by abosch            #+#    #+#             */
/*   Updated: 2018/07/24 22:35:51 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	putminint(void)
{
	put_char('-');
	put_char('2');
	put_char('1');
	put_char('4');
	put_char('7');
	put_char('4');
	put_char('8');
	put_char('3');
	put_char('6');
	put_char('4');
	put_char('8');
}

void	putnbr(int nb)
{
	if (nb == -2147483648)
	{
		putminint();
		return ;
	}
	if (nb < 0)
	{
		put_char('-');
		putnbr(-1 * nb);
		return ;
	}
	if (nb < 10)
	{
		put_char(nb + '0');
		return ;
	}
	putnbr(nb / 10);
	put_char(nb % 10 + 48);
}
