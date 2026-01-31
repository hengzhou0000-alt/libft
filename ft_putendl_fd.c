/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcarbaj <agcarbaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:02:42 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/31 16:22:43 by agcarbaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	c = '\n';
	write(fd, &c, 1);
}
/*int	main(void)
{
	char *str = "HOLA MUNDOO";
	ft_putendl_fd(str, 1);
	ft_putendl_fd(str, 1);
	return(0);
}*/