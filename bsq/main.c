/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 05:01:45 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/24 11:18:52 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	move_into_functions(char **buf, char *buffer)
{
	int	*fi;
	int	*nums;
	int	**positions;
	int	f;
	int	j;

	positions = find_position(buf, buffer, find_char(buffer));
	fi = change_values(buf, buffer, positions, count_obstacles(buf, buffer));
	nums = find_coord(fi, buffer, count_rows(buffer) * count_columns(buffer));
	mod_square(buf, nums, sust_char(buffer));
	f = 0;
	while (f < count_rows(buffer))
	{
		j = 0;
		while (j < count_columns(buffer))
		{
			write(1, &buf[f][j], 1);
			j++;
		}
		f++;
		write(1, "\n", 1);
	}
}

void	conditional_error(char *str, int argc)
{
	char	**buf;
	char	*buffer;

	buffer = malloc(SIZE + 1);
	read_file(str, buffer, argc);
	buf = initialize_array(buffer);
	if (entry_error(buffer) == 0 && long_error(buffer) == 0
		&& char_error(buffer) == 0)
		move_into_functions(buf, buffer);
	else
		write(1, "map error\n", 10);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
			conditional_error(argv[i++], argc);
	}
	else
		conditional_error(argv[i], argc);
}
