/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 11:24:34 by abosch            #+#    #+#             */
/*   Updated: 2018/07/15 21:56:51 by arebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_dot_or_num(char c)
{
	if ((c >= '0' && c <= '9') || c == '.')
		return (1);
	return (0);
}

int		is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		is_compose_allowed_charac(int argc, char **argv)
{
	int cnt;
	int cnt2;
	int char_counter;

	char_counter = 0;
	cnt = 1;
	while (cnt < argc)
	{
		cnt2 = 0;
		while (argv[cnt][cnt2] != '\0')
		{
			if (!is_dot_or_num(argv[cnt][cnt2]))
				return (0);
			if (is_num(argv[cnt][cnt2]))
				char_counter++;
			cnt2++;
		}
		cnt++;
	}
	if (char_counter < 17)
		return (0);
	return (1);
}

int		is_9_char(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i == 9)
		return (1);
	return (0);
}

int		check_args(int argc, char **argv)
{
	int cnt;

	if (argc != 10)
		return (0);
	cnt = 1;
	while (cnt < 10)
	{
		if (!is_9_char(argv[cnt]))
			return (0);
		cnt++;
	}
	if (!is_compose_allowed_charac(argc, argv))
		return (0);
	return (1);
}
