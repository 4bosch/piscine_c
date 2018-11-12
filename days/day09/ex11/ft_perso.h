/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:34:50 by abosch            #+#    #+#             */
/*   Updated: 2018/07/13 16:40:57 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD (0)
# include <string.h>

typedef	struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	int		profession;
}				t_perso;

#endif
