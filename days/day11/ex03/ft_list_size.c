/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:24:07 by abosch            #+#    #+#             */
/*   Updated: 2018/07/26 22:51:52 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*list;

	list = begin_list;
	i = 0;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}
