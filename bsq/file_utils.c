/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 04:52:03 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/24 08:25:54 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	read_file(char *file, char *buffer, int argc)
{
	int	fd;
	int	sz;

	if (argc > 1)
	{
		fd = open(file, O_RDONLY);
		if (fd < 1)
			return (0);
		sz = read(fd, buffer, SIZE - 1);
	}
	else
		sz = read(0, buffer, SIZE - 1);
	if (sz <= 0)
	{
		write(1, "map error", 9);
		return (0);
	}
	else
		buffer[sz - 1] = '\0';
	close(fd);
	return (0);
}
