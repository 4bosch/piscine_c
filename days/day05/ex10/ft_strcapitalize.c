/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 18:55:00 by abosch            #+#    #+#             */
/*   Updated: 2018/07/12 01:23:25 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

void	everything_lower(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int		is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int is_new_word;
	int i;

	everything_lower(str);
	i = 0;
	is_new_word = 1;
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i]) && is_new_word && !(is_num(str[i])))
		{
			str[i] -= 32;
			is_new_word = 0;
		}
		if (is_num(str[i]) && is_new_word)
			is_new_word = 0;
		i++;
		if (!(is_alphanum(str[i])))
			is_new_word = 1;
	}
	return (str);
}
