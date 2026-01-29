/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_calloc.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: hezhou <hezhou@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/01/15 15:20:52 by hezhou			#+#	#+#			 */
/*   Updated: 2026/01/29 17:12:36 by hezhou		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdint.h>

void	*ft_calloc(size_t num, size_t n)
{
	size_t			i;
	unsigned char	*str;
	size_t			total;

	if (n != 0 && num > SIZE_MAX / n)
		return (NULL);
	total = num * n;
	str = malloc(total);
	if (!str)
		return (NULL);
	i = 0;
	while (i < total)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
/*int	main (void)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_calloc(SIZE_MAX, SIZE_MAX);
	i = 0;
	while (i < 20)
	{
		printf("%d", str[i]);
		i++;
	}
	return (0);
}*/