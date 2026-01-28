/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:20:52 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/28 19:15:09 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdint.h>

void	*ft_calloc(size_t num, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = malloc(num * n);
	if (!str)
		return (0);
	i = 0;
	if (num == 0 || n == 0)
	{
		str[i] = 0;
		return (str);
	}
	while (i < (num * n))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
/*int	main (void)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_calloc(SIZE_MAX, SIZE_MAX);
	i = 0;
	while (i < 20)
	{
		printf("%d", str[i]);
		i++;
	}
	return (0);
}*/