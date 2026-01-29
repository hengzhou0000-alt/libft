/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:59:55 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/29 17:54:16 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int	ft_countdig(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_strdrop(unsigned int n, char *str)
{
	int				i;
	unsigned int	j;

	j = n;
	i = ft_countdig(n) - 1;
	while (i >= 0)
	{
		str[i] = ((j % 10) + '0');
		j = j / 10;
		i--;
	}
	str[ft_countdig(n)] = '\0';
	return ;
}

char	*ft_itoa(int n)
{
	char			*ret;
	unsigned int	j;

	j = ft_countdig(n);
	if (n < 0)
		j = ft_countdig(n * -1) + 1;
	ret = malloc(sizeof(char) * (j + 1));
	if (!ret)
		return (NULL);
	if (n == -2147483648)
	{
		ret[0] = '-';
		ret[1] = '2';
		ft_strdrop(147483648, &ret[2]);
	}
	else if (n < 0)
	{
		ret[0] = '-';
		ft_strdrop((n * -1), &ret[1]);
	}
	else if (n >= 0)
	{
		ft_strdrop(n, ret);
	}
	return (ret);
}

/*int main(void)
{
	int i1 = -2147483648;
	int i2 = 0;
	int i3 = 2147483647;
	printf("%s\n",ft_itoa(i1));
	printf("%s\n",ft_itoa(i2));
	printf("%s\n",ft_itoa(i3));
	return(0);
}*/