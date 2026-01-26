/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:54:10 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/19 11:34:10 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*p;

	p = (char *) str;
	i = 0;
	while (p[i])
		i++;
	i--;
	while (i > 0)
	{
		if (p[i] == c)
			return (&p[i]);
		i--;
	}
	return (0);
}
/*int main() 
{
	char cadena[] = "Hola mundo jeje";
	char caracter_a_buscar = 'm';
	char *resultado;
	resultado = ft_strrchr (cadena, caracter_a_buscar);
	printf("%s", resultado);
	return(0);
}*/