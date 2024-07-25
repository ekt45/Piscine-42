/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:08:56 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/11 14:44:40 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
//int main()
//{
//	char *s1 = "h\0la0000000'?k";
//	char *s2 = "h\0$$$$44";
//	unsigned int n = 5;
//	printf("%d", ft_strncmp(s1, s2, n));
//	printf("\n%d", strncmp(s1, s2, n));
//	return (0);
//}
