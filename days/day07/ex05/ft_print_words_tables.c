/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 21:09:44 by abosch            #+#    #+#             */
/*   Updated: 2018/07/19 17:17:16 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char_table(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
	ft_putchar('\n');
}

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		print_char_table(tab[i]);
		i++;
	}
}
