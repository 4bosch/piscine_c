/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:46:43 by abosch            #+#    #+#             */
/*   Updated: 2018/07/09 12:58:50 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int facto;

	facto = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb < 13)
	{
		while (nb > 0)
		{
			facto *= nb;
			nb--;
		}
		return (facto);
	}
	return (0);
}
