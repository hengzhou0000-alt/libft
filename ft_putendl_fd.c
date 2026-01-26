/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:02:42 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/22 18:14:24 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *str, int fd)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	write(fd, str, i);
	write(fd, "\n", 1);
}
/*int	main(void)
{
	char *str = "HOLA MUNDOO";
	ft_putendl_fd(str, 1);
	ft_putendl_fd(str, 1);
	return(0);
}*/