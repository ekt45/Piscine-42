/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:23:11 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/06 10:23:26 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	boolean;
	int	contador;
	int	temporal;
	int	temporal2;

	boolean = 1;
	while (boolean != 0)
	{
		contador = 0;
		boolean = 0;
		while (contador < size - 1)
		{
			temporal = tab[contador];
			temporal2 = tab[contador + 1];
			if (temporal > temporal2)
			{
				tab[contador] = temporal2;
				tab[contador + 1] = temporal;
				boolean++;
			}
			contador++;
		}
	}
}
//int main()
//{
//	int tab[7] = {-4,-7,9,0,0,79,-3};
//	int size = 7;
//	ft_sort_int_tab(tab, size);
//	for(int i = 0;i<=6;i++)
//	{
//		printf("%d",tab[i]);
//	}
//}
