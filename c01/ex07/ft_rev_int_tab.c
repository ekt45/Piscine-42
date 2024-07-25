/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:07:26 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/05 15:08:29 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	changes;
	int	tempo;

	changes = 0;
	while (changes < size / 2)
	{
		tempo = tab[changes];
		tab[changes] = tab[size - changes - 1];
		tab[size - changes -1] = tempo;
		changes++;
	}
}
//int main()
//{
//	int tab [] = {6,5,6,3};
//	int size = 4;
//	ft_rev_int_tab(tab, size);
//	printf("%i%i%i%i",tab[0],tab[1],tab[2],tab[3]);
//}
