/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:32:39 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/27 16:02:02 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;

	i = 0;
	while (n > 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
		n--;
	}
	return (dest);
}

/*int main(void)
{
	char	dest[] = "123456789";
	char	src[] = "NO HOLA MUNDO";
	char	*ret;
	ret = ft_memcpy(dest, src , 8);
	printf("%s",ret);
	return(0);
}*/