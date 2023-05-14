/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:14:42 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/14 18:34:47 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

p_list	*ps_lstnew(int content)
{
	p_list	*tmp;

	tmp = malloc(sizeof(p_list));
	if (tmp)
	{
		tmp->content = content;
		tmp->next = NULL;
	}
	return (tmp);
}

int	ps_lstsize(p_list *lst)
{
	p_list	*tmp;
	int		i;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ps_lstadd_front(p_list **lst, p_list *new)
{
	new->next = *lst;
	*lst = new;
}

void	ps_lstadd_back(p_list **lst, p_list *new)
{
	p_list	*tmp;

	if (*lst)
	{
		tmp = ps_lstlast(*lst);
		tmp->next = new;
	}
	else
		*lst = new;
}

p_list	*ps_lstlast(p_list *lst)
{
	p_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->next == NULL)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
