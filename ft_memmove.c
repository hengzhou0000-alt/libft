/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:33:17 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/19 11:39:27 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (dest > src)
	{
		j = -1;
		i = (int)num - 1;
	}
	while ((int)num > 0)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i = i + j;
		num--;
	}
	return (((char *)dest));
}

/*int main(void)
{
	char	dest[] = "Hola mundo";
	char	src[] = "NO HO hola mundo";
	ft_memmove(dest, src , 10);
	printf("%s\n",dest);
	char	*locura;
	locura = src;
	locura++;
	locura++;
	locura++;
	locura++;
	locura++;
	locura++;
	ft_memmove(locura, src, 17);
	printf("%s\n",locura);
	printf("%s\n",src);
	return(0);
}*/