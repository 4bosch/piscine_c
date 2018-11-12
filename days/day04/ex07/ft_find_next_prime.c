/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 00:40:37 by abosch            #+#    #+#             */
/*   Updated: 2018/07/10 23:42:18 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int test)
{
	int cnt;

	cnt = 2;
	while (cnt < 46341 && cnt < test)
	{
		if (test % cnt == 0)
		{
			return (0);
		}
		cnt++;
	}
	if (test == 4)
		return (0);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	if (nb == 0 || nb == 1)
		return (2);
	while (!(is_prime(nb)))
		nb++;
	return (nb);
}
