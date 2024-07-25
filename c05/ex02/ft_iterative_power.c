/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:21:50 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/15 14:33:09 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= temp;
		power--;
	}
	return (nb);
}
//int main()
//{
//	printf("%d",ft_iterative_power(2, -1));
//	return (0);
//}
