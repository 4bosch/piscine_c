/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:41:47 by abosch            #+#    #+#             */
/*   Updated: 2018/07/26 23:18:34 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	if (begin_list != NULL)
	{
		tmp = *begin_list;
		while (*begin_list != NULL)
		{
			tmp = *begin_list;
			*begin_list = (*begin_list)->next;
			free(tmp);
		}
	}
}
