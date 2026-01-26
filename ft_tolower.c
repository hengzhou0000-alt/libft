/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:50:39 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/15 15:14:55 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int main(void)
{
    int    a = 'z';
    int    b = '5';
    int    c = 'x';
    unsigned char    text;
    text = ft_tolower(a);
    write(1, &text, 1);
    text = ft_tolower(b);
    write(1, &text, 1);
    text = ft_tolower(c);
    write(1, &text, 1);
    return(0);
}*/