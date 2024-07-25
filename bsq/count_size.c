/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 05:51:05 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/24 07:16:13 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	count_rows(char *buffer)
{
	char	*entry;
	int		num;
	int		i;

	i = 0;
	num = 0;
	while (buffer[i] != '\n')
		i++;
	entry = malloc(sizeof(char) * i);
	i = 0;
	while (buffer[i + 3] != '\n')
	{
		entry[i] = buffer[i];
		i++;
	}
	entry[i] = '\0';
	i = 0;
	while (entry[i] != '\0')
		num = num * 10 + (entry[i++] - '0');
	return (num);
}

int	count_columns(char *buffer)
{
	int	i;
	int	counter;
	int	index;

	i = 0;
	index = 0;
	counter = 0;
	while (buffer[i] != '\n')
		i++;
	i++;
	while (buffer[i] != '\0')
	{
		if (buffer[i] != '\n')
			counter++;
		else
			break ;
		i++;
	}
	return (counter);
}
