/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:36:37 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/16 10:52:09 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	temp;
	int	boolean;

	if (nb <= 2)
		return (2);
	while (1 == 1)
	{
		boolean = 0;
		temp = nb / 2;
		while (temp > 1)
		{
			if (nb % temp == 0)
			{
				boolean = 1;
				break ;
			}
			temp--;
		}
		if (boolean == 0)
			return (nb);
		nb++;
	}
}
//int main()
//{
//	printf("%d", ft_find_next_prime(50000));
//	return (0);
//}
