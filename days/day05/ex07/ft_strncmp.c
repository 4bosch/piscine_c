/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 17:22:43 by abosch            #+#    #+#             */
/*   Updated: 2018/07/10 17:22:49 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_nend(char c1, char c2)
{
	if (c1 == '\0' || c2 == '\0')
		return (0);
	return (1);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int cnt;

	cnt = 0;
	while ((s1[cnt] == s2[cnt] && is_nend(s1[cnt], s2[cnt]) && cnt + 1 < n))
		cnt++;
	if (s1[cnt] != s2[cnt])
		return (s1[cnt] - s2[cnt]);
	return (0);
}
