/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <hezhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:07:04 by hezhou            #+#    #+#             */
/*   Updated: 2026/01/26 12:51:37 by hezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static t_list	*ft_lsserch(t_list *lst, int	i)
{
	if (!lst)
		return (NULL);
	while (i > 0 && lst)
	{
		lst = lst -> next;
		i--;
	}
	if (!lst)
		return ;
	return (lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*Ret;
	t_list	*Pun;
	int		i;

	if (!lst)
		return (NULL);
	Pun = lst;
	i = ft_lstsize(lst);
	while (i > 0)
	{
		Pun = ft_lsserch(lst, i);
		Ret = ft_lstadd_front(&Ret, ft_lstnew(f(Pun -> content)));
		if (!Ret)
			ft_lstclear (&Ret, del);
		i--;
	}
	return (Ret);
}
