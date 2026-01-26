/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:07:01 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/15 14:53:39 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s2[i] != '\0' && s1[i] != '\0' && i < n - 1)
		i++;
	return ((char)s1[i] - (char)s2[i]);
}
/*int	main (void)
{
	char	str1[] = "Perra";
	char	str2[] = "Perro";
	printf("%d",ft_strncmp(str1,str2, 5));
	return 0;
}*/