/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:41:34 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/07 18:23:06 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_a(int x, int j)
{
	ft_putchar('o');
	while (j < x - 2)
	{
		ft_putchar('-');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
}

void	print_b(int x, int y, int l, int f)
{
	while (f < y - 2)
	{
		l = 0;
		ft_putchar('|');
		while (l < x - 2)
		{
			ft_putchar(' ');
			l++;
		}
		if (x > 1)
		{
			ft_putchar('|');
		}
		f++;
		write(1, "\n", 1);
	}
}

void	rush(int x, int y)
{
	int	j;
	int	f;
	int	l;	

	j = 0;
	f = 0;
	l = 0;
	if (!(x < 1 || y < 1))
	{
		print_a(x, j);
		write(1, "\n", 1);
		print_b(x, y, l, f);
		j = 0;
		if (y > 1)
			print_a(x, j);
	}
}
