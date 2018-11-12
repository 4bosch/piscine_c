/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 15:54:12 by abosch            #+#    #+#             */
/*   Updated: 2018/07/24 22:33:41 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int boolean1;
	int boolean2;

	boolean1 = 1;
	i = -1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0 && boolean1)
			boolean1 = 1;
		else
			boolean1 = 0;
	}
	i = -1;
	boolean2 = 1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0 && boolean2)
			boolean2 = 1;
		else
			boolean2 = 0;
	}
	if (!boolean1 && !boolean2)
		return (0);
	return (1);
}
