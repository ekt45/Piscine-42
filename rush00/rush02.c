/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:00:32 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/07 18:26:12 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_a(int x, int j, char letra)
{
	ft_putchar(letra);
	while (j < x - 2)
	{
		ft_putchar('B');
		j++;
	}
	if (x > 1)
	{
		ft_putchar(letra);
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
	int		j;
	int		f;
	int		l;	

	j = 0;
	f = 0;
	l = 0;
	if (!(x < 1 || y < 1))
	{
		letra = 'A';
		print_a(x, j, letra);
		write(1, "\n", 1);
		print_b(x, y, l, f);
		j = 0;
		letra = 'C';
		if (y > 1)
			print_a(x, j, letra);
	}
}
