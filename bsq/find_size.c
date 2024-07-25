/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 04:53:58 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/24 06:26:36 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	sust_char(char *buffer)
{
	int		i;
	char	f;

	i = 0;
	f = '0';
	while (buffer[i] != '\n')
	{
		if (buffer[i + 1] == '\n')
		{
			f = buffer[i];
			return (f);
		}
		i++;
	}
	return (f);
}

char	find_char(char *buffer)
{
	int		i;
	char	f;

	i = 0;
	f = '0';
	while (buffer[i] != '\n')
	{
		if (buffer[i + 2] == '\n')
		{
			f = buffer[i];
			return (f);
		}
		i++;
	}
	return (f);
}

int	count_obstacles(char **buf, char *buffer)
{
	int		i;
	int		j;
	int		index;
	char	f;

	f = find_char(buffer);
	i = 0;
	index = 0;
	while (i < count_rows(buffer))
	{
		j = 0;
		while (j < count_columns(buffer))
		{
			if (buf[i][j] == f)
				index++;
			j++;
		}
		i++;
	}
	return (index);
}
