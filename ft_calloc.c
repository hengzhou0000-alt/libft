/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:20:52 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/16 17:43:51 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t num, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = malloc(num * n);
	while (i < num)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_calloc(15, sizeof(char));
	i = 0;
	while (i < 20)
	{
		printf("%d", str[i]);
		i++;
	}
	return (0);
}*/