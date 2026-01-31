/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcarbaj <agcarbaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:13:03 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/31 16:29:47 by agcarbaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *strSource)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!strSource)
		return (NULL);
	while (strSource[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	while (j < i)
	{
		str[j] = strSource[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*#include <stdio.h>
int main ( void )
{
   char buffer[] = "This is the buffer text";
   char *newstring;
   printf( "Original: %s\n", buffer );
   newstring = ft_strdup( buffer );
   printf( "Copy:     %s\n", newstring );
   free( newstring );
   return(0);
}*/