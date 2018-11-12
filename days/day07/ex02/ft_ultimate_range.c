/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 11:54:07 by abosch            #+#    #+#             */
/*   Updated: 2018/07/20 10:22:34 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int len;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	if (!(tab = (int*)malloc(sizeof(*tab) * len)))
		return (0);
	i = 0;
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
