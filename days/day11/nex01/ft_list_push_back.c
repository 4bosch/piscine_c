/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:58:53 by abosch            #+#    #+#             */
/*   Updated: 2018/07/26 22:51:41 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *new;

	if (begin_list != NULL)
	{
		tmp = *begin_list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		new = ft_create_elem(data);
		tmp->next = new;
	}
}
