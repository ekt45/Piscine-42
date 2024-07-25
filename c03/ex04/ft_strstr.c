/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:35:08 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/13 10:41:35 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_(char *str, char *to_find, int i, int j)
{
	while (to_find[j] != '\0')
	{
		if (to_find[j] != str[j + i])
		{
			return (0);
		}
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	boolean;

	i = 0;
	j = 0;
	boolean = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			boolean = find_(str, to_find, i, j);
		}
		if (boolean == 1)
			return (str + i);
		i++;
	}
	return (0);
}
//int main() {
//	// char str[] = "\0Hello";
//	// char needle[] = "\0Hel";
//	// printf("%p\n", ft_strstr(str, needle));
//	// printf("%p\n", strstr(str, needle));
//
//	char str[20];
//	char needle[5];
//	needle[4] = 0;
//	str[19] = 0;
//	while (1) {
//		for (int i = 0; i < 19; ++i)
//			str[i] = rand() % 256;
//		for (int i = 0; i < 4; ++i)
//			needle[i] = rand() % 256;
//
//		int idx = rand() % 30;
//		for (int i = 0; (i + idx) < 19; ++i)
//			str[idx + i] = needle[i];
//
//		for (int i = 0; i < 19; ++i)
//			printf("%i ", str[i]);
//		printf("\n");
//
//		for (int i = 0; i < 4; ++i)
//			printf("%i ", needle[i]);
//		printf("\n");
//
//		printf("%p - %p\n", ft_strstr(str, needle), strstr(str, needle));
//		if (ft_strstr(str, needle) != strstr(str, needle))
//			break;
//	}
//}
