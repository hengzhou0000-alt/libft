/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:03:18 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/26 14:39:28 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nuevo;

	nuevo = (t_list *)malloc(sizeof(t_list));
	if (!nuevo)
		return (NULL);
	nuevo -> content = content;
	nuevo -> next = NULL;
	return (nuevo);
}
/*int	main(void)
{
	t_list	*lista;
	char	*c = "jsfjj";

	lista = ft_lstnew(c);
	printf("%s", (char *)(lista -> content));
	return (0);
}*/