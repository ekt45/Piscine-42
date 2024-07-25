/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:15:34 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/18 12:47:53 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i > 0)
		{
			nb *= i;
			i--;
		}
	}
	return (nb);
}
//int main()
//{
//	int nb = 4;
//	printf("%d",ft_iterative_factorial(nb));
//	return (0);
//}
