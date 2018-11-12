/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 11:09:22 by abosch            #+#    #+#             */
/*   Updated: 2018/11/12 18:00:49 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *del;

	list = *begin_list;
	while (list != NULL && list->next != NULL)
	{
		if ((*cmp)(list->next->data, data_ref) == 0)
		{
			del = list->next;
			list->next = list->next->next;
			free(del);
		}
		list = list->next;
	}
	list = *begin_list;
	if (list != NULL && (*cmp)(list->data, data_ref) == 0)
	{
		*begin_list = (*begin_list)->next;
		free(list);
	}
}
