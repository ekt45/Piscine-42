/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:13:35 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/10 14:33:46 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
//int main()
//{
//	char dest [12] = "buenas";
//	char src[5] = "hola";
//	unsigned int nb = 3;
//	printf("%s", ft_strncat(dest, src, nb));
//	char desti [12] = "buenas";
//	printf("\n%s", strncat(desti, src, nb));
//	return 0;
//}
