/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 09:32:24 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/28 18:54:31 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *str, int n, size_t num)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *) str;
	i = 0;
	while (i < num)
	{
		if (p[i] == (unsigned char)n)
			return (&p[i]);
		i++;
	}
	return (0);
}
/*int main() 
{
    char cadena[] = "Hola mundo";
    char caracter_a_buscar = 'm';
    char *resultado;
    resultado = ft_memchr (cadena, caracter_a_buscar, 7);
    printf("%s", resultado);
    return(0);
}*/