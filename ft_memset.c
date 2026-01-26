/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:34:02 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/19 11:49:42 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	*ft_memset(void *str, int n, size_t num)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = str;
	while (i < count)
	{
		dest[i] = c;
		i++;
	}
	return (dest);
}

/*int main( )
{
   char buffer[] = "This is a test of the memset function";
   printf( "Before: %s\n", buffer );
   ft_memset( buffer, '*', 40);
   printf( "After:  %s\n", buffer );
   return(0);
}*/