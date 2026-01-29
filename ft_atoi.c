/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:51:41 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/29 17:02:48 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	ret;
	int	i;	
	int	j;

	i = 0;
	j = 1;
	ret = 0;
	if (!str)
		return (0);
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			j = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (ret * j);
}

/*int	main(void)
{
	char	c[] = " 		 ---+--+1234ab567";
	char	c2[] = "2147483647";
	char	c3[] = "-2147483648";
	printf("%d\n",ft_atoi(c));
	printf("%d\n",ft_atoi(c2));
	printf("%d",ft_atoi(c3));
	return 0;
}*/
