/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:16:20 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/16 15:44:53 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1 [i + 1] == '\0' && s2[i + 1] == '\0')
			return (0);
		i++;
	}
	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		boolean;
	char	*temp;
	char	*temp2;

	boolean = 1;
	while (boolean != 0)
	{
		boolean = 0;
		i = 0;
		while (i < argc - 1)
		{
			temp = argv[i];
			temp2 = argv[i + 1];
			if (ft_strcmp(temp, temp2) > 0)
			{
				argv[i] = temp2;
				argv[i + 1] = temp;
				boolean++;
			}
			i++;
		}
	}
	ft_print_params(argc, argv);
}
