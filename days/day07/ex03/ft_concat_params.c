/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 12:37:45 by abosch            #+#    #+#             */
/*   Updated: 2018/07/23 15:47:07 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		param_length(char **argv, int argc)
{
	int i;
	int cnt;
	int length;

	i = 1;
	length = 0;
	cnt = 0;
	while (i < argc)
	{
		cnt = 0;
		while (argv[i][cnt] != '\0')
		{
			length += 1;
			cnt++;
		}
		i++;
		length += 1;
	}
	return (length);
}

void	transform_param(int argc, char **argv, char *tab)
{
	int i;
	int cnt;
	int cnt2;

	i = 1;
	cnt2 = 0;
	while (i < argc)
	{
		cnt = 0;
		while (argv[i][cnt] != '\0')
		{
			tab[cnt2] = argv[i][cnt];
			cnt2++;
			cnt++;
		}
		if (i != argc - 1)
			tab[cnt2] = '\n';
		else
			tab[cnt2] = '\0';
		cnt2++;
		i++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	int		length;
	char	*tab;

	length = param_length(argv, argc);
	if (!(tab = (char *)malloc(sizeof(tab) * length)))
		return (NULL);
	transform_param(argc, argv, tab);
	return (tab);
}
