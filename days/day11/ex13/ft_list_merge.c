/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 15:11:35 by abosch            #+#    #+#             */
/*   Updated: 2018/07/26 21:57:20 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	list = *begin_list1;
	if (list != NULL)
	{
		while (list->next != NULL)
			list = list->next;
		list->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
