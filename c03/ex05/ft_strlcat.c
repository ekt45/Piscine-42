/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:32:28 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/10 18:20:45 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && (j + i) < size - 1 && size > 0)
	{
		dest [i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	j = 0;
	while (src [j] != '\0')
		j++;
	if (size <= i)
		return (j + size);
	else
		return (j + i);
}
//int main()
//{
//	char dest [5] = "hola";
//	char src [6] = "bolal";
//	unsigned int size = 4;
//	printf("%d", ft_strlcat(dest, src, size));
//	return 0;
//}
