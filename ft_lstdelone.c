/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:05:43 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/26 15:15:34 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{

}
/*void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new -> next = *lst;
	*lst = new;
}

void	ft_printlst(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)(lst -> content));
		lst = lst -> next;
	}
}
int	main	(void)
{
	char	*a = "Hola";
	char	*b = ", Me llamo";
	char	*c = "Ernesto";
	char	*d = "Puton";
	t_list *lista = NULL;

	ft_lstadd_front( &lista, ft_lstnew(a));
	ft_lstadd_front( &lista, ft_lstnew(b));
	ft_lstadd_front( &lista, ft_lstnew(c));
	ft_lstadd_front( &lista, ft_lstnew(d));
	ft_printlst(lista);
	ft_printlst(lista);
	return (0);
}*/