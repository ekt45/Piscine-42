/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:19:16 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/16 10:14:39 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *d, int nb)
{
	int	i;

	i = 0;
	while (d[i] != '\0')
		i++;
	i--;
	if (nb < 0)
	{
		write(1, "-", 1);
		while (i >= 0)
		{
			write(1, &d[i], 1);
			i--;
		}
	}
	else
	{
		while (i >= 0)
		{
			write(1, &d[i], 1);
			i--;
		}
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		temp;
	char	d[11];

	i = 0;
	while (i < 11)
		d[i++] = '\0';
	i = 0;
	temp = nb;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0 && nb > -2147483648)
			temp *= -1;
		while (temp != 0)
		{
			d[i] = temp % 10 + '0';
			temp /= 10;
			i++;
		}
		ft_print(d, nb);
	}
}
//int main()
//{
//	int n = 2147483647;
//	ft_putnbr(n);
//	return 0;
//}
