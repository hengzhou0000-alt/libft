/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:11:18 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/16 17:42:08 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = '\0';
		i++;
	}
}
/*int main(void)
{
    char buffer[100];
    ft_bzero(buffer, 100);
    printf("%s",buffer);
    return (0);
}*/