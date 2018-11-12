/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:19:50 by abosch            #+#    #+#             */
/*   Updated: 2018/07/26 22:51:47 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *yay;

	if (begin_list == NULL)
		return ;
	yay = ft_create_elem(data);
	yay->next = *begin_list;
	*begin_list = yay;
}
