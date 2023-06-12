/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:26:51 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/12 17:12:11 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(p_list **stack_a)
{
	p_list	*tmp;
	p_list	*last;

	last = ps_lstlast(*stack_a);
	tmp = *stack_a;
	*stack_a = tmp->next;
	last->next = tmp;
	tmp->next = NULL;
	index_init(stack_a);
	write(1, "ra", 2);
}


void	rb(p_list **stack_b)
{
	p_list	*tmp;
	p_list	*last;

	last = ps_lstlast(*stack_b);
	tmp = *stack_b;
	*stack_b = tmp->next;
	last->next = tmp;
	tmp->next = NULL;
	index_init(stack_b);
	write(1, "rb", 2);
}

void	rr(p_list **stack_a, p_list **stack_b)
{
	p_list	*tmp;
	p_list	*last;

	last = ps_lstlast(*stack_a);
	tmp = *stack_a;
	*stack_a = tmp->next;
	last->next = tmp;
	tmp->next = NULL;
	index_init(stack_a);
	last = ps_lstlast(*stack_b);
	tmp = *stack_b;
	*stack_b = tmp->next;
	last->next = tmp;
	tmp->next = NULL;
	index_init(stack_b);
	write(1, "rr", 2);
}
