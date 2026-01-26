/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:31:07 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/16 17:53:27 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t count)
{
	int		i;

	i = 0;
	while (((char *)str1)[i] && ((char *)str2)[i] && i < (int)count)
	{
		if (((char *)str1)[i] != ((char *)str2)[i])
			return (((char *)str1)[i] - ((char *)str2)[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	char	dest[] = "Hola mundo";
	char	src[] = "HolA mundo";
	printf("%d",ft_memcmp(dest, src , 4));
	return(0);
}*/