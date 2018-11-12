/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 11:53:02 by abosch            #+#    #+#             */
/*   Updated: 2018/07/26 23:17:29 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*tmp;

	if (ac < 1 || ac == NULL)
		return (0);
	list = ft_create_elem(av[--ac]);
	tmp = list;
	while (--ac >= 0)
	{
		list->next = ft_create_elem(av[ac]);
		list = list->next;
	}
	return (tmp);
}
