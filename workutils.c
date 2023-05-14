/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:06:56 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/14 21:36:17 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlst(p_list **stack_a)
{
	p_list	*tmp;
	p_list	*save;
	int i;

	save = *stack_a;
	while(save)
	{
		tmp = save->next;
		i = save->content;
		ft_printf("%d ", i);
		save = tmp;
	}
	ft_printf(" / ");
}

void	index_init(p_list **stack_a)
{
	p_list	*tmp;
	p_list	*save;
	int i;

	i = 0;
	save = *stack_a;
	while(save)
	{
		tmp = save->next;
		save->index = i;
		i++;
		save = tmp;
	}
}

void	ft_printindex(p_list **stack_a)
{
	p_list	*tmp;
	p_list	*save;
	int i;

	save = *stack_a;
	while(save)
	{
		tmp = save->next;
		i = save->index;
		ft_printf("%d ", i);
		save = tmp;
	}
}
