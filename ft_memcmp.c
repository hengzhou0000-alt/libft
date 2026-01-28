/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:31:07 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/27 16:18:05 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t count)
{
	unsigned int	i;

	i = 0;
	while (i < (unsigned int)count)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	char s[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	if(ft_memcmp(s, s2, 1) > 0)
		printf("el 3 salio bien\n");
	if(ft_memcmp(s2, s, 1) < 0)
		printf("el 4 salio bien\n");
	if(ft_memcmp(s2, s3, 4) != 0)
		printf("el 5 salio bien\n");
	write(1, "\n", 1);
	return (0);
}*/