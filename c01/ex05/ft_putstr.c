/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:07:30 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/05 12:12:51 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	direccion;

	direccion = 0;
	while (str [direccion] != '\0')
	{
		write(1, &str[direccion], 1);
		direccion++;
	}
}
//int main()
//{
//	char str[]= "djsflksdf";
//	ft_putstr(str);
//	return 0;
//}
