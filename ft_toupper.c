/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:50:39 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/15 15:16:47 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int main(void)
{
    int    a = 'z';
    int    b = '5';
    int    c = 'x';
    unsigned char    text;
    text = ft_toupper(a);
    write(1, &text, 1);
    text = ft_toupper(b);
    write(1, &text, 1);
    text = ft_toupper(c);
    write(1, &text, 1);
    return(0);
}*/