/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:57:41 by abosch            #+#    #+#             */
/*   Updated: 2018/07/09 11:34:13 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 12)
	{
		return (0);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	return (ft_recursive_factorial(nb - 1) * nb);
}
