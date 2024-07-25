/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 05:01:06 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/24 06:22:26 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*change_values(char **buf, char *buffer, int **positions, int index)
{
	int		i;
	int		j;
	int		value;
	int		*nums;
	char	f;

	f = find_char(buffer);
	i = 0;
	nums = malloc(sizeof(int) * count_rows(buffer) * count_columns(buffer));
	while (i < count_rows(buffer))
	{
		j = 0;
		while (j < count_columns(buffer))
		{
			if (buf[i][j] != f)
			{
				value = valueofpos(i, j, index, positions);
				value = valueofwalls(value, i, j, buffer);
				nums[i * count_columns(buffer) + j] = value;
			}
			j++;
		}
		i++;
	}
	return (nums);
}

int	*find_coord(int	*num, char *buffer, int size)
{
	int	i;
	int	max;
	int	*coord;

	max = 0;
	i = 0;
	coord = (int *)malloc(sizeof(int) * 3);
	while (i < size)
	{
		if (num[i] > max)
		{
			max = num[i];
			coord[0] = num[i];
			coord[1] = i / count_columns(buffer);
			coord[2] = i % count_columns(buffer);
		}
		i++;
	}
	return (coord);
}

void	mod_square(char **buf, int *coord, char f)
{
	int	i;
	int	j;

	i = coord[1];
	while (i < coord[0] + coord[1])
	{
		j = coord[2];
		while (j < coord[0] + coord[2])
		{
			buf[i][j] = f;
			j++;
		}
		i++;
	}
}
