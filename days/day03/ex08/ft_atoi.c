/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 21:30:36 by abosch            #+#    #+#             */
/*   Updated: 2018/07/09 15:13:32 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int		is_blank(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}

void	while_blank(char *str, int *cnt)
{
	while (is_blank(str[*cnt]))
		*cnt = *cnt + 1;
}

int		ft_atoi(char *str)
{
	int nbr;
	int cnt;
	int is_neg;

	is_neg = 0;
	nbr = 0;
	cnt = 0;
	while_blank(str, &cnt);
	if (str[cnt] == '+' && is_numeric(str[cnt + 1]))
		cnt++;
	if (str[cnt] == '-' && is_numeric(str[cnt + 1]))
	{
		is_neg = 1;
		cnt++;
	}
	while (is_numeric(str[cnt]))
	{
		nbr *= 10;
		nbr += (str[cnt] - 48);
		cnt++;
	}
	if (is_neg)
		return (nbr * (-1));
	return (nbr);
}
