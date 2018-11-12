/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 01:22:03 by abosch            #+#    #+#             */
/*   Updated: 2018/07/12 21:28:39 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				is_no_null;

	is_no_null = 1;
	i = 0;
	while (i < n)
	{
		if (src[i] != '\0' && is_no_null)
			dest[i] = src[i];
		else
		{
			is_no_null = 0;
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
