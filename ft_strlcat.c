/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:46:41 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/26 18:03:15 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t num)
{
	unsigned int	i;

	i = 0;
	while (i < num && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*int main (void)
{
	char src[] = "Manolo";
	char dest[] = "EsteMan";
	printf("p: %s", ft_strlcat(dest, src, 4), dest);
	return (0);
}*/