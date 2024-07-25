/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:41:09 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/18 10:30:09 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*sust_zero(char *dest, int total_size, int size, int size2)
{
	int	i;

	i = 0;
	while (i < total_size + (size - 1) * size2 + 1)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_final;
	int		i;
	int		total_size;

	i = 0;
	total_size = 0;
	if (size <= 0)
		return (malloc(1));
	while (i < size)
		total_size += ft_strlen(strs[i++]);
	str_final = malloc(total_size + (size - 1) * ft_strlen(sep));
	str_final = sust_zero(str_final, total_size, size, ft_strlen(sep));
	i = 0;
	while (i < size)
	{
		str_final = ft_strcat(str_final, strs[i]);
		if (ft_strlen(str_final) != total_size + (size - 1) * ft_strlen(sep))
			str_final = ft_strcat(str_final, sep);
		else
			break ;
		i++;
	}
	return (str_final);
}
//#include <stdio.h>
//int main()
//{
//	int	size = 4;
//	char	strs [4][5] = {{"hola"},{"mola"},{"bola"},{"cola"}};
//	char	sep[3] = "..";
//	char	*str_final = ft_strjoin(size, strs, sep);
//	printf("%s", str_final);
//}
