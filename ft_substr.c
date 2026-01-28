/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:53:40 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/27 18:50:50 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ret;

	i = 0;
	if (start > ft_strlen(s))
		return (0);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	while (len > 0 && s[start + i])
	{
		ret[i] = s[start + i];
		len--;
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