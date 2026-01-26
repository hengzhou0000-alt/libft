/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:04:46 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/26 14:53:30 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ret;

	if (!lst)
		return (NULL);
	ret = lst;
	while (ret -> next != NULL)
		ret = ret -> next;
	return (ret);
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
	t_list *prueba;

	ft_lstadd_front( &lista, ft_lstnew(a));
	ft_lstadd_front( &lista, ft_lstnew(b));
	ft_lstadd_front( &lista, ft_lstnew(c));
	ft_lstadd_front( &lista, ft_lstnew(d));
	prueba = ft_lstlast(lista);
	ft_printlst(prueba);
	return (0);
}*/