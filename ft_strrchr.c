/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:54:10 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/27 16:45:26 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*p;

	p = (char *)str;
	i = 0;
	while (p[i])
		i++;
	while (i >= 0)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i--;
	}
	return (0);
}
/*int main() 
{
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	char s3[] = "";
	if(ft_strrchr(s, 't') == s)
		printf("OK1 ");
	if(ft_strrchr(s, 'l') == s + 8)
		printf("OK2 ");
	if(ft_strrchr(s2, 'l') == s2 + 9)
		printf("OK3 ");
	if(ft_strrchr(s, 'z') == NULL)
		printf("OK4 ");
	if(ft_strrchr(s, 0) == s + strlen(s))
		printf("OK5 ");
	if(ft_strrchr(s, 't' + 256) == s)
		printf("OK6 ");
	char * empty = (char*)calloc(1, 1);
	if(ft_strrchr(empty, 'V') == NULL)
		printf("OK7 ");
	if(ft_strrchr(s3, 0) == s3)
		printf("OK9 ");
	write(1, "\n", 1);
	return(0);
}*/