/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:07:04 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/26 17:37:15 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new -> next = *lst;
	*lst = new;
}
t_list	*ft_lsserch(t_list *lst, int i)
{
	if (!lst)
		return (NULL);
	while (i > 0 && lst)
	{
		lst = lst -> next;
		i--;
	}
	if (!lst)
		return (NULL);
	return (lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*Ret;
	t_list	*Pun;
	t_list	*tmp;
	int		i;

	Ret = NULL;
	if (!lst)
		return (NULL);
	Pun = lst;
	i = ft_lstsize(lst);
	while (i > 0)
	{
		Pun = ft_lsserch(lst, i - 1);
		tmp = ft_lstnew(f(Pun -> content));
		if (!tmp)
			ft_lstclear (&Ret, del);
		ft_lstadd_front(&Ret, tmp);
		i--;
	}
	return (Ret);
}
/*void	ft_printlst(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)(lst -> content));
		lst = lst -> next;
	}
}
void *prueba(void *c)
{
    char *str = (char *)c;
    char *new = ft_strdup(str);
    int i = 0;

    if (!new)
        return (NULL);
    while (new[i])
    {
        if (new[i] == '0')
            new[i] = '9';
        i++;
    }
    return (new);
}
int	main (void)
{
	char	a[] = "1 1";
	char	b[] = "10 10";
	char	c[] = "20 20";
	char	d[] = "100 100";
	t_list	*lista = NULL;
	t_list	*retur;

	ft_lstadd_front( &lista, ft_lstnew(a));
	ft_lstadd_front( &lista, ft_lstnew(b));
	ft_lstadd_front( &lista, ft_lstnew(c));
	ft_lstadd_front( &lista, ft_lstnew(d));
	retur = ft_lstmap(lista, prueba, free);
	ft_printlst(retur);
	return (0);
}*/