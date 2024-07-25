/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:53:41 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/17 17:39:10 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	subtract;

	subtract = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc((sizeof(int)) * subtract);
	if (!(*range))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
//int main()
//{
//	int	*range;
//	int	min = 79;
//	int	max = 80;
//	int	f;
//	f = ft_ultimate_range(&range, min, max);
//	printf("%d", f);	
//}
