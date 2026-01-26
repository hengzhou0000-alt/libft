/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:06:37 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/26 17:13:49 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
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
void prueba(void *c)
{
	int	i;

	i = 0;
	while (((char *)c)[i])
	{
		if (((char *)c)[i] == '0')
			((char *)c)[i] = '9';
		i++;
	}
}
int	main (void)
{
	char	a[] = "1 1";
	char	b[] = "10 10";
	char	c[] = "20 20";
	char	d[] = "100 100";
	t_list	*lista = NULL;

	ft_lstadd_front( &lista, ft_lstnew(a));
	ft_lstadd_front( &lista, ft_lstnew(b));
	ft_lstadd_front( &lista, ft_lstnew(c));
	ft_lstadd_front( &lista, ft_lstnew(d));
	ft_lstiter(lista, prueba);
	ft_printlst(lista);
	return (0);
}*/