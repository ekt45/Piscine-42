/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 04:59:50 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/24 05:12:13 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	setmin(int *vals, int size)
{
	int	i;
	int	min;

	i = 0;
	if (size <= 0)
		return (0);
	while (vals[i] < 0 && vals[i] < size)
		i++;
	if (vals[i] >= 0)
		min = vals[i];
	else
		return (0);
	while (i < size)
	{
		if (vals[i] < min && vals[i] >= 0)
			min = vals[i];
		i++;
	}
	return (min);
}

int	valueofpos(int indx1, int indx2, int index, int **positions)
{
	int	i;
	int	value;
	int	value2;
	int	*vals;

	i = 0;
	vals = malloc(sizeof(int) * index);
	while (i < index)
	{
		value = positions[i][0] - indx1;
		value2 = positions[i][1] - indx2;
		if (value > -1 && value2 > -1)
		{
			if (value2 > value)
				value = value2;
			vals[i] = value;
		}
		else
			vals[i] = -1;
		i++;
	}
	value = setmin(vals, index);
	free(vals);
	return (value);
}

int	valueofwalls(int value, int indx1, int indx2, char *buffer)
{
	int	i;
	int	j;

	i = count_rows(buffer) - indx1;
	j = count_columns(buffer) - indx2;
	if (i < value)
		value = i;
	if (j < value)
		value = j;
	return (value);
}
