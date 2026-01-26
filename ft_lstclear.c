/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:06:08 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/26 16:48:02 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*pun;

	pun = *lst;
	if (!lst)
		return ;
	while (pun)
	{
		tmp = pun -> next;
		del(pun -> content);
		free(pun);
		pun = tmp;
	}
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
	t_list	*lista = NULL;

	ft_lstadd_front( &lista, ft_lstnew(a));
	ft_lstadd_front( &lista, ft_lstnew(b));
	ft_lstadd_front( &lista, ft_lstnew(c));
	ft_lstadd_front( &lista, ft_lstnew(d));
	ft_lstclear(&lista, free);
	ft_printlst(lista);
	return (0);
}*/