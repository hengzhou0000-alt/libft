/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcarbaj <agcarbaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:00:14 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/31 16:17:20 by agcarbaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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