/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 04:58:15 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/24 06:20:30 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	**size_of_array(char **buf, char *buffer)
{
	int	index;
	int	**positions;
	int	i;

	i = 0;
	index = count_obstacles(buf, buffer);
	positions = (int **)malloc(sizeof(int *) * index);
	while (i < index)
	{
		positions[i] = malloc(sizeof(int) * 2);
		i++;
	}
	return (positions);
}

int	**find_position(char **buf, char *buffer, char f)
{
	int	i;
	int	j;
	int	**positions;
	int	index;

	positions = size_of_array(buf, buffer);
	i = 0;
	index = 0;
	while (i < count_rows(buffer))
	{
		j = 0;
		while (j < count_columns(buffer))
		{
			if (buf[i][j] == f)
			{
				positions[index][0] = i;
				positions[index][1] = j;
				index++;
			}
			j++;
		}
		i++;
	}
	return (positions);
}
