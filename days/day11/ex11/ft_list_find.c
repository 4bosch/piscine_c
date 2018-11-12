/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:55:16 by abosch            #+#    #+#             */
/*   Updated: 2018/07/26 11:08:47 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;

	list = begin_list;
	while (list != NULL)
	{
		if ((*cmp)(list->data, data_ref) == 0)
			return (list);
		list = list->next;
	}
	return (NULL);
}
