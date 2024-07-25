/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:10:55 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/05 11:12:17 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
//int main ()
//{
//	int a,b;
//	a = 20;
//	b = 6;
//	ft_ultimate_div_mod(&a , &b);
//	printf("La división es %d y el resto es %d",a,b);
//	return 0;
//}
