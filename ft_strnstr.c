/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 10:43:43 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/27 18:03:19 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;

	size = (unsigned int)len;
	i = 0;
	j = 0;
	if (!((little)[j]))
		return (&(((char *)big)[i]));
	while ((big)[i] && size > i + j)
	{
		j = 0;
		while (big[i + j] && (big[i + j] == little[j]) && size > i + j)
		{
			j++;
			if (!((little)[j]))
				return (&(((char *)big)[i]));
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    char myStr[] = "The";
    char *myPtr = ft_strnstr(myStr, "The ", 73);
    printf("%s", myPtr);
    return(0);
}*/