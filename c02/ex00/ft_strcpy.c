/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:55:58 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/08 12:30:24 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != 0)
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
//int main()
//{
//	char dest [6];
//	char src [] = "buenas";
//	printf("%s%s\n",dest,src);
//	ft_strcpy(dest, src);
//	printf("%s%s\n",dest,src);
//	return 0;
//}
