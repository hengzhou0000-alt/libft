/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:51:44 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/27 17:01:19 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t num)
{
	unsigned int	i;

	i = 0;
	if (num != 0)
	{
		while (i < num - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		i = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/*int main (void)
{
	char src[] = "Manolo";
	char dest[] = "EsteMan";
	printf("podrian habeo: %s", ft_strlcpy(dest, src, 4), dest);
	return (0);
}*/