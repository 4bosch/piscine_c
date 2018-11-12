/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 15:40:01 by abosch            #+#    #+#             */
/*   Updated: 2018/07/24 23:28:48 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res;

	if (!(res = (int*)malloc(sizeof(int) * length + 1)))
		return (NULL);
	i = -1;
	while (++i < length)
		res[i] = f(tab[i]);
	return (res);
}
