/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:01:08 by abosch            #+#    #+#             */
/*   Updated: 2018/07/05 21:25:57 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		cnt1;
	int		cnt2;
	char	tmp;

	cnt1 = 0;
	cnt2 = 0;
	tmp = 0;
	while (str[cnt1] != '\0')
	{
		cnt1++;
	}
	cnt1--;
	while (cnt2 < cnt1)
	{
		tmp = str[cnt2];
		str[cnt2] = str[cnt1];
		str[cnt1] = tmp;
		cnt2++;
		cnt1--;
	}
	return (str);
}
