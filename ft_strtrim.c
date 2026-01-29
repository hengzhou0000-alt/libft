/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:11:10 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/29 17:54:09 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t	i;
	int		j;

	i = 0;
	j = 1;
	if ((!dest && !src) || num == 0)
		return (dest);
	if ((char *)dest > (char *)src && (char *)src + num > (char *)dest)
	{
		j = -1;
		i = num - 1;
	}
	while ((int)num > 0)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i = i + j;
		num--;
	}
	return (((char *)dest));
}

size_t	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	ft_ischarinstr(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str1, char const *str2)
{
	char	*ret;
	int		i;

	if (!str1 || !str2)
		return (NULL);
	ret = malloc(sizeof(char) * (ft_strlen((char *) str1) + 1));
	if (!ret)
		return (0);
	i = 0;
	ft_memmove(ret, str1, ft_strlen((char *)str1) + 1);
	while (ret[i] && ft_ischarinstr(ret[i], str2))
	{
		ft_memmove(&ret[i], &ret[i + 1], ft_strlen(&ret[i + 1]) + 1);
	}
	i = ft_strlen(ret) - 1;
	while (i >= 0 && ret[i] && ft_ischarinstr(ret[i], str2))
	{
		ret[i] = '\0';
		i--;
	}
	return (ret);
}

/*int main(void)
{
	char *a1 = "¡¿a1b2c3d4e5f6g7h8i9j10k?!";
	char *a2 = "¡?¿!1234567890";
	char *a3 = "abcdefghijk";
	char *a4;
	a4 = ft_strtrim(a1, a2);
	printf("%s\n", a4);
	a4 = ft_strtrim(a1, a3);
	printf("%s", a4);
	return(0);
}*/