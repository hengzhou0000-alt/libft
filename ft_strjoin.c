/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:51:30 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/29 17:18:04 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*ret;
	size_t	i;
	size_t	j;

	if (!str1 || !str2)
		return (NULL);
	ret = malloc(sizeof(char) *(ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		ret[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		ret[i + j] = str2[j];
		j++;
	}
	ret[i + j] = '\0';
	return (ret);
}
/*int	main(void)
{
	char	*str1 = "Hostia ";
	char	*str2 = "tio ";
	char	*str3 = "q no lo ";
	char	*str4 = "he enchufado";
	char	*str5;
	str5 = ft_strjoin (str1,str2);
	printf("%s\n",str5);
	str5 = ft_strjoin (str5,str3);
	printf("%s\n",str5);
	str5 = ft_strjoin (str5,str4);
	printf("%s\n",str5);
	return (0);
}*/
