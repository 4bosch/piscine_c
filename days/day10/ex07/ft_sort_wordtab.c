/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 23:17:30 by abosch            #+#    #+#             */
/*   Updated: 2018/07/24 20:57:09 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cmp(char *s1, char *s2)
{
	int cnt;

	cnt = 0;
	if (s1 == '\0' && s2 == '\0')
		return (0);
	while (s1[cnt] == s2[cnt] && s1[cnt] != '\0' && s2[cnt] != '\0')
		cnt++;
	if (s1[cnt] != s2[cnt])
		return (s1[cnt] - s2[cnt]);
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		j = 0;
		while (j < i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i--;
	}
}
