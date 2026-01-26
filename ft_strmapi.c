/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:00:14 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/22 17:19:53 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	if (!str || !f)
		return (NULL);
	ret = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ret[i] = f(i, str[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
/*char	ft_prueba(unsigned int n, char c)
{
	char ret;
	ret = c + n;
	return(ret);
}

int	main(void)
{
	char	*c = "aaaaaaaaaaa";
	char	*ret = ft_strmapi(c, ft_prueba);
	printf("%s\n", ret);
	return(0);
}*/