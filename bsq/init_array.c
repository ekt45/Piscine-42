/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 05:57:03 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/24 06:30:50 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**create_array(char *buffer)
{
	int		i;
	int		j;
	int		x;
	char	**buf;

	x = 0;
	i = count_rows(buffer);
	j = count_columns(buffer);
	buf = (char **)malloc(sizeof(char *) * i + 1);
	while (x < i)
	{
		buf[x] = malloc(sizeof(char) * j + 1);
		x++;
	}
	return (buf);
}

char	**initialize_array(char *buffer)
{
	int		i;
	int		j;
	int		k;
	char	**buf;

	i = 0;
	k = 0;
	buf = create_array(buffer);
	while (buffer[k] != '\n')
		k++;
	k++;
	while (i < count_rows(buffer))
	{
		j = 0;
		while (j < count_columns(buffer))
		{
			if (buffer[k] != '\n')
				buf[i][j] = buffer[k];
			if (buffer[k] != '\n')
				j++;
			k++;
		}
		i++;
	}
	return (buf);
}
