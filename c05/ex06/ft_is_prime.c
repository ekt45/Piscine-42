/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:15:43 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/15 17:34:21 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	temp;

	temp = nb / 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (temp > 1)
	{
		if (nb % temp == 0)
			return (0);
		temp--;
	}
	return (1);
}
//int	main()
//{
//	printf("%d", ft_is_prime(0));
//	return (0);
//}
