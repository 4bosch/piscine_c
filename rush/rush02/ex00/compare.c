/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 12:33:52 by augay             #+#    #+#             */
/*   Updated: 2018/07/22 12:48:57 by augay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_store_one_line(int x, char *sym, int pos, char *out)
{
	int	len_line;
	int	suite;

	suite = 0;
	while (out[suite])
		suite++;
	if (x <= 0)
		return ;
	else if (x == 1)
		out[suite++] = sym[pos + 0];
	else
	{
		len_line = 0;
		out[suite++] = sym[pos + 0];
		while (len_line < x - 2)
		{
			out[suite++] = sym[pos + 1];
			len_line++;
		}
		out[suite++] = sym[pos + 2];
	}
	out[suite++] = '\n';
	out[suite] = '\0';
}

void	ft_gen(int x, int y, char *c, char *out)
{
	int height;

	height = 0;
	if (y <= 0)
		return ;
	ft_store_one_line(x, c, 0, out);
	if (y > 1)
	{
		while (height < y - 2)
		{
			ft_store_one_line(x, c, 3, out);
			height++;
		}
		ft_store_one_line(x, c, 6, out);
	}
}

int		comp_0n(char *in, int col, int ligne, char *s)
{
	char	*out;
	int		result;

	result = 0;
	if ((out = (char*)malloc(sizeof(char) * (col + 1) * ligne + 1)) == NULL)
		return (-1);
	out[0] = '\0';
	ft_gen(col, ligne, s, out);
	result = ft_strcmp(in, out);
	free(out);
	return ((result == 0) ? 1 : 0);
}

void	all_comp(int x, int y, int *tab, char *s)
{
	char *symbole;

	symbole = "o-o| |o-o";
	tab[0] = comp_0n(s, x, y, symbole);
	symbole = "/*\\* *\\*/";
	tab[1] = comp_0n(s, x, y, symbole);
	symbole = "ABAB BCBC";
	tab[2] = comp_0n(s, x, y, symbole);
	symbole = "ABCB BABC";
	tab[3] = comp_0n(s, x, y, symbole);
	symbole = "ABCB BCBA";
	tab[4] = comp_0n(s, x, y, symbole);
}
