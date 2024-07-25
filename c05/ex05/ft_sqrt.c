/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:48:08 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/15 16:31:28 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	div_nb;

	div_nb = 0;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	if (div_nb % 2 == 0)
		div_nb = nb / 2;
	else
		div_nb = (nb / 2) + 1;
	while (div_nb > 0)
	{
		if (div_nb * div_nb == nb)
			return (div_nb);
		div_nb--;
	}
	return (0);
}
//#include <stdio.h>
//int main()
//{
//	printf("%d", ft_sqrt(-2));
//	return (0);
//}
