/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 06:44:18 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/24 08:22:32 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	entry_error(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i + 3] != '\n')
		i++;
	if (i == 0)
		return (1);
	if (buffer[i] == buffer[i + 1] || buffer[i] == buffer[i + 2]
		|| buffer[i + 1] == buffer[i + 2])
	{
		return (1);
	}
	return (0);
}

int	long_error(char *buffer)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	index = count_columns(buffer);
	while (buffer[i] != '\n')
		i++;
	i++;
	while (buffer[i] != '\0')
	{
		j = 0;
		while (buffer[i] != '\n' && buffer[i] != '\0')
		{
			j++;
			i++;
		}
		if (j != index)
			return (2);
		i++;
	}
	return (0);
}

int	checkifis(char *buffer, char *ch)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	i++;
	while (buffer[i] != '\0')
	{
		if (buffer[i] != ch[0] && buffer[i] != ch[1]
			&& buffer[i] != '\n')
			return (3);
		i++;
	}
	return (0);
}

int	char_error(char *buffer)
{
	int		i;
	int		v;
	char	*entry;

	i = 0;
	entry = (char *)malloc(sizeof(char) * 2 + 1);
	while (buffer[i] != '\n')
	{
		if (buffer[i + 3] == '\n')
		{
			entry[0] = buffer[i];
			entry[1] = buffer[i + 1];
		}
		i++;
	}
	entry[2] = '\0';
	v = checkifis(buffer, entry);
	return (v);
}
