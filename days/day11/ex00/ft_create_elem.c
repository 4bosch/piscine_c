/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:44:21 by abosch            #+#    #+#             */
/*   Updated: 2018/07/25 10:30:05 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *yay;

	if (!(yay = malloc(sizeof(t_list))))
		return (NULL);
	yay->data = data;
	yay->next = NULL;
	return (yay);
}
