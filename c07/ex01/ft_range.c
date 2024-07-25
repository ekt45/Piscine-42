/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:46:42 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/16 17:38:18 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	subtract;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	subtract = max - min;
	range = malloc(sizeof(int) * subtract);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
//int	main()
//{
//	int	min = 54;
//	int	max = 9;
//	int	i = 0;
//
//	int	*range = ft_range(min, max);
//	while (min < max)
//	{
//		printf("%d", range[i]);
//		i++;
//		min++;
//	}
//	return (0);
//}
