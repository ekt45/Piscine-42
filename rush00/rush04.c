/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:07:52 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/07 18:29:29 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_a(int x, int j, char letra, char letra_)
{
	ft_putchar(letra);
	while (j < x - 2)
	{
		ft_putchar('B');
		j++;
	}
	if (x > 1)
	{
		ft_putchar(letra_);
	}
}

void	print_b(int x, int y, int l, int f)
{
	while (f < y - 2)
	{
		l = 0;
		ft_putchar('B');
		while (l < x - 2)
		{
			ft_putchar(' ');
			l++;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		f++;
		write(1, "\n", 1);
	}
}

void	rush(int x, int y)
{
	char	letra;
	char	letra_;
	int		j;
	int		f;
	int		l;	

	j = 0;
	f = 0;
	l = 0;
	letra = 'A';
	letra_ = 'C';
	if (!(x < 1 || y < 1))
	{
		print_a(x, j, letra, letra_);
		write(1, "\n", 1);
		print_b(x, y, l, f);
		j = 0;
		if (y > 1)
			print_a(x, j, letra_, letra);
	}
}
