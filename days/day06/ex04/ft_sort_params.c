/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:22:30 by abosch            #+#    #+#             */
/*   Updated: 2018/07/17 14:05:48 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		mystrcmp(char *s1, char *s2)
{
	int cnt;

	cnt = 0;
	while (s1[cnt] == s2[cnt] && s1[cnt] != '\0' && s2[cnt] != '\0')
		cnt++;
	if (s1[cnt] != s2[cnt])
		return (s1[cnt] - s2[cnt]);
	return (0);
}

void	swap(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = argc - 1;
	while (i > 0)
	{
		j = 1;
		while (j < i)
		{
			if (mystrcmp(argv[j], argv[j + 1]) > 0)
			{
				swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i--;
	}
	j = 1;
	while (j < argc)
	{
		putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
}
