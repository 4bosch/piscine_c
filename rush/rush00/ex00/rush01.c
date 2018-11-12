/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 17:49:32 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/08 17:52:22 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x, int y)
{
	int cnt;

	cnt = 0;
	while (cnt < x)
	{
		if (cnt == 0)
		{
			ft_putchar('/');
		}
		else if (cnt == x - 1)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
		}
		cnt++;
	}
	if (x == 1 && y == 1)
		ft_putchar('\n');
}

void	last_line(int x)
{
	int cnt;

	cnt = 0;
	while (cnt < x)
	{
		if (cnt == 0)
		{
			ft_putchar('\\');
		}
		else if (cnt == x - 1)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
		}
		cnt++;
	}
}

void	middle_line(int x)
{
	int cnt;

	cnt = 0;
	while (cnt < x)
	{
		if (cnt == 0)
		{
			ft_putchar('*');
		}
		else if (cnt == x - 1)
		{
			ft_putchar('*');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
		cnt++;
	}
}

void	vertical_line(int y)
{
	int cnt;

	cnt = 0;
	while (cnt < y)
	{
		if (cnt == 0)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		else if (cnt == y - 1)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
			ft_putchar('\n');
		}
		cnt++;
	}
}

int		rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (x == 1 && y > 1)
			vertical_line(y);
		else
		{
			if (x >= 1 && y == 1)
				first_line(x, y);
			else
			{
				first_line(x, y);
				while (y - 2 > 0)
				{
					middle_line(x);
					y--;
				}
				last_line(x);
			}
		}
		return (0);
	}
	return (-1);
}
