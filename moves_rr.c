/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 21:22:43 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/14 21:24:05 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(p_list **stack_a)
{
	p_list	*last;
	p_list	*prev;

	last = *stack_a;
	while(last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	ps_lstadd_front(stack_a, last);
	index_init(stack_a);
}

void	rrb(p_list **stack_b)
{
	p_list	*last;
	p_list	*prev;

	last = *stack_b;
	while(last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	ps_lstadd_front(stack_b, last);
	index_init(stack_b);
}

void	rrr(p_list **stack_a, p_list **stack_b)
{
	p_list	*last;
	p_list	*prev;

	last = *stack_a;
	while(last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	ps_lstadd_front(stack_a, last);
	index_init(stack_a);
	last = *stack_b;
	while(last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	ps_lstadd_front(stack_b, last);
	index_init(stack_b);
}