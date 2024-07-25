/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:06:51 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/16 10:31:42 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(int i, char *str)
{
	if (str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t'
		||str[i] == '\v' || str[i] == ' ')
		return (1);
	return (0);
}

int	set_num(int num, int i, char *str)
{
	int	j;

	j = 0;
	while (str[i] >= '0' && str[i] <= '9' && j < 12)
	{
		num *= 10;
		num += str[i] - '0';
		i++;
		j++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (is_space(i, str) == 1)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num = set_num(num, i, str);
			return (num * sign);
		}
		else if (str[i] != '+')
			return (0);
		i++;
	}
	return (0);
}
//int main()
//{
//	char str[33] =  " ----+77875hg6";
//	printf("%d", ft_atoi(str));
//	return (0);
//}
