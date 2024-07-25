/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:25:47 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/05 10:25:57 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//int main()
//{
//	int a, b, div, mod;
//	a = 20;
//	b = 6;
//	ft_div_mod(a,b,&div,&mod);
//	printf("%d es la división y %d\n el resto",div,mod);
//	return 0;
//}
