/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:42:21 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/24 07:43:01 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define SIZE 2000000

int		read_file(char *file, char *buffer, int argc);
char	*entry_errors(char *buffer);
int		count_rows(char *buffer);
int		count_columns(char *buffer);
char	**create_array(char *buffer);
char	**initialize_array(char *buffer);
char	sust_char(char *buffer);
char	find_char(char *buffer);
int		count_obstacles(char **buf, char *buffer);
int		**size_of_array(char **buf, char *buffer);
int		**find_position(char **buf, char *buffer, char f);
int		setmin(int *vals, int size);
int		valueofpos(int indx1, int indx2, int index, int **positions);
int		valueofwalls(int value, int indx1, int indx2, char *buffer);
int		*change_values(char **buf, char *buffer, int **positions, int index);
int		*find_coord(int *num, char *buffer, int size);
int		entry_error(char *buffer);
int		long_error(char *buffer);
int		char_error(char *buffer);
void	mod_square(char **buf, int *coord, char f);

#endif
