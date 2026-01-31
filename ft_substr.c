/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcarbaj <agcarbaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:53:40 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/31 16:08:15 by agcarbaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ret;
	size_t		sizemax;

	i = 0;
	sizemax = 0;
	if (((size_t)start) > ft_strlen(s))
		sizemax = 0;
	else if (((size_t)start + len) > ft_strlen(s))
		sizemax = ft_strlen(s) - start;
	else if (((size_t)start + len) <= ft_strlen(s))
		sizemax = len;
	ret = malloc(sizeof(char) * (sizemax + 1));
	if (!ret)
		return (0);
	while (sizemax > 0 && s[start + i])
	{
		ret[i] = s[start + i];
		sizemax--;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/*int	main(void)
{
	char	*str1 = "No es no y todo lo demas es tonteria";
	char	*str2 = ft_substr(str1, 3, 10);

	printf("%s\n", str2);
	return (0);
}*/