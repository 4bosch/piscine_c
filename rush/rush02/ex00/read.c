/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 15:15:52 by mthoman           #+#    #+#             */
/*   Updated: 2018/07/22 10:35:29 by augay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <errno.h>

char	*get_input(void)
{
	int		bytes_read;
	char	*buff;
	int		buff_size;
	int		total_read;

	total_read = 0;
	buff_size = 1;
	if (!((buff = malloc(sizeof(char) * 1))))
		return (NULL);
	while ((bytes_read = read(0, buff + total_read, buff_size - total_read)))
	{
		total_read = total_read + bytes_read;
		if (total_read >= buff_size)
		{
			buff = alloc_more(buff, buff_size, buff_size + 1);
			buff_size = buff_size + 1;
		}
	}
	if (total_read == buff_size)
	{
		buff = alloc_more(buff, buff_size, buff_size + 1);
		buff_size++;
	}
	buff[buff_size - 1] = '\0';
	return (buff);
}

char	*alloc_more(char *buff, unsigned int size, unsigned int new_size)
{
	char			*res;
	unsigned int	i;

	if (!(res = malloc(new_size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = buff[i];
		i++;
	}
	free(buff);
	return (res);
}
