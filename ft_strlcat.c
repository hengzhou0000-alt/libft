/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:46:41 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/27 17:20:51 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	h;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	h = 0;
	if (size <= j)
		return (size + i);
	while (src[h] && j + h < size - 1)
	{
		dest[j + h] = src[h];
		h++;
	}
	dest[j + h] = '\0';
	return (j + i);
}

/*int main (void)
{
	char src[] = "Manolo";
	char dest[] = "EsteMan";
	printf("p: %s", ft_strlcat(dest, src, 4), dest);
	return (0);
}*/