/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 09:32:24 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/19 11:42:16 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(void *str, int n, size_t num)
{
	int		i;
	char	*p;

	p = (char *)str;
	i = 0;
	while (p[i] && i < (int)num)
	{
		if (p[i] == n)
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