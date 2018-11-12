/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:21:35 by abosch            #+#    #+#             */
/*   Updated: 2018/07/06 13:42:45 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swapint(int *c1, int *c2)
{
	int tmp;

	tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}

int		is_next_lower(int current, int next)
{
	if (current > next)
	{
		return (1);
	}
	return (0);
}

void	ft_sort_integer_table(int *tab, int size)
{
	int cnt1;
	int cnt2;

	cnt1 = size;
	cnt2 = 0;
	while (cnt1 > 0)
	{
		cnt2 = 0;
		while (cnt2 < cnt1)
		{
			if (is_next_lower(tab[cnt2], tab[cnt2 + 1]))
			{
				swapint(tab + cnt2, tab + cnt2 + 1);
			}
			cnt2++;
		}
		cnt1--;
	}
}
