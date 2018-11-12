/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:00:19 by abosch            #+#    #+#             */
/*   Updated: 2018/07/13 16:13:11 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int i;
	int rep;

	i = 0;
	while (i < length)
	{
		if (tab[i] == 0)
		{
			rep = i;
			while (rep < length)
			{
				tab[rep] = tab[rep + 1];
				rep++;
			}
			length--;
		}
		else
			i++;
	}
	return (length);
}
