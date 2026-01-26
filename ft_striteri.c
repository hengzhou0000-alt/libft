/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:00:58 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/22 17:38:40 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!str || !f)
		return ;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
}
/*void	ft_prueba(unsigned int n, char *c)
{
	c[0] = c[0] + n;
}

int	main(void)
{
	char	c[] = "aaaaaaaaaaa";
	ft_striteri(c, ft_prueba);
	printf("%s\n", c);
	return(0);
}*/