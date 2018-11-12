/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:26:35 by abosch            #+#    #+#             */
/*   Updated: 2018/07/09 12:57:38 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		recursive_cnt(int nb)
{
	if (nb == 14)
		return (1);
	return (nb + recursive_cnt(nb + 1));
}

int		ft_eight_queens_puzzle(void)
{
	return (recursive_cnt(1));
}
