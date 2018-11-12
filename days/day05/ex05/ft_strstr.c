/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 00:37:48 by abosch            #+#    #+#             */
/*   Updated: 2018/07/10 14:37:08 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lenght_str(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int cnt;
	int cnttmp;
	int cnt2;
	int len;

	cnt = 0;
	len = lenght_str(to_find);
	while (str[cnt] != '\0')
	{
		cnt2 = 0;
		cnttmp = cnt;
		while (to_find[cnt2] == str[cnttmp] && cnt2 < len)
		{
			cnt2++;
			cnttmp++;
		}
		if (cnt2 == len)
			return (str + cnt);
		cnt++;
	}
	return (0);
}
