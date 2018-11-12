/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:08:10 by abosch            #+#    #+#             */
/*   Updated: 2018/07/20 10:29:59 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c)
{
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

int		is_not_all_separator(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && is_separator(str[i]))
		i++;
	if (str[i] == '\0')
		return (0);
	return (1);
}

int		count_word(char *str)
{
	int i;
	int cnt;
	int is_new_word;

	is_new_word = 1;
	cnt = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (is_new_word && !is_separator(str[i]))
		{
			cnt++;
			is_new_word = 0;
		}
		if (is_separator(str[i]))
			is_new_word = 1;
	}
	return (cnt);
}

int		word_length(char *str)
{
	int i;

	i = 0;
	while (!is_separator(str[i]) && str[i] != '\0')
		i++;
	return (i + 2);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		cnt;
	int		cnt2;

	i = -1;
	cnt = 0;
	if ((tab = (char**)malloc(sizeof(*tab) * count_word(str) + 1)) == 0)
		return (NULL);
	while (++i < count_word(str))
	{
		while (is_separator(str[cnt]))
			cnt++;
		if (!(tab[i] = (char*)malloc(sizeof(char) * word_length(&str[cnt]))))
			return (NULL);
		cnt2 = 0;
		while (!is_separator(str[cnt]) && str[cnt] != '\0')
			tab[i][cnt2++] = str[cnt++];
		tab[i][cnt2] = '\0';
	}
	tab[i] = 0;
	return (tab);
}
