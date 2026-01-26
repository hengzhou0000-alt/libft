/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:03:00 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/22 18:30:59 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd((n * -1), fd);
	}
	else if (n >= 0)
	{
		if (n > 9)
			ft_putnbr_fd((n / 10), fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
	}
}
/*int	main(void)
{
	int i = 1238993;
	int j = -2147483648;
	int h = 2147483647;
	ft_putnbr_fd(i, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(j, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(h, 1);
	return (0);
}*/