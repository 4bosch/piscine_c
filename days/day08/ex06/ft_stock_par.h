/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 16:48:45 by abosch            #+#    #+#             */
/*   Updated: 2018/07/21 23:46:11 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct		s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}					t_stock_par;

char				**ft_split_whitespaces(char *str);

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

void				ft_putchar(char c);
#endif
