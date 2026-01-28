/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:34:35 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/27 16:37:15 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*p;

	p = (char *) str;
	i = 0;
	while (p[i])
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	if (p[i] == (unsigned char)c)
		return (&p[i]);
	return (0);
}
/*int main() 
{
	char cadena[] = "Hola mundo";
	char caracter_a_buscar = 'o';
	char *resultado;
	resultado = ft_strchr (cadena, caracter_a_buscar);
	printf("%s", resultado);
	return(0);
}*/