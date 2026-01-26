/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:58:54 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/26 17:43:16 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int	ft_lenword(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		j++;
		i++;
	}
	return (j);
}

static char	*ft_copywords(char *dest, char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_countwords(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			j++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (j);
}

static void	ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

char	**ft_split(char const *str, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		len;

	ret = malloc((ft_countwords((char *)str, c) + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	i = 0;
	j = 0;
	while (((char *) str)[i])
	{
		while (((char *) str)[i] == c)
			i++;
		len = ft_lenword(&((char *) str)[i], c);
		ret[j] = malloc(sizeof(char) * (len + 1));
		if (!ret[j])
			return (ft_free(ret, j), NULL);
		ft_copywords(ret[j], &((char *) str)[i], len);
		i = i + len;
		j++;
	}
	ret[j] = NULL;
	return (ret);
}
/*int	main (void)
{
	char *str1 = "Hola mundo este es una nota";
	char **str2;
	str2 = ft_split(str1, ' ');
	printf("%s\n", str2[0]);
	printf("%s\n", str2[1]);
	printf("%s\n", str2[2]);
	printf("%s\n", str2[3]);
	printf("%s\n", str2[4]);
	printf("%s\n", str2[5]);
	printf("%s\n", str2[6]);
	for (int i = 0; str2[i]; i++)
		free(str2[i]);
	free(str2);
	return (0);
}*/