/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:44:10 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/07 16:00:52 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	checkletter(int i, char *str)
{
	if ((str[i - 1] >= 97 && str[i - 1] <= 122)
		|| (str[i - 1] >= 65 && str[i - 1] <= 90)
		|| (str[i - 1] >= 49 && str[i - 1] <= 57))
	{
		str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			if (str [i] >= 65 && str[i] <= 90)
				checkletter(i, str);
		}
		else
		{
			if (!((str[i - 1] >= 97 && str[i - 1] <= 122)
					|| (str[i - 1] >= 65 && str[i - 1] <= 90)
					|| (str[i - 1] >= 49 && str[i - 1] <= 57)))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
//int	main()
//{
//	char salut [62] = "";
//	printf("%s", ft_strcapitalize(salut)); }
