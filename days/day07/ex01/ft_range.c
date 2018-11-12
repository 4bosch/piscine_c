/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:45:12 by abosch            #+#    #+#             */
/*   Updated: 2018/07/20 14:47:20 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int len;
	int i;

	if (min >= max)
	{
		return (0);
	}
	len = max - min;
	if (!(tab = (int*)malloc(sizeof(*tab) * len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
