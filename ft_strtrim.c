/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:11:10 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/29 19:03:41 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (str1[start] && ft_ischarinstr(str1[start], str2))
		start++;
	end = ft_strlen(str1);
	while (end > start && ft_ischarinstr(str1[end - 1], str2))
		end--;
	ret = malloc(sizeof(char) * (end - start + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (start < end)
	{
		ret[i++] = str1[start++];
	}
	ret[i] = 0;
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