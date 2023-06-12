/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 21:22:43 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/12 18:27:10 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_listx **stack_a)
{
	t_listx	*last;
	t_listx	*prev;

	last = *stack_a;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	ps_lstadd_front(stack_a, last);
	index_init(stack_a);
	write(1, "rra", 3);
}

void	rrb(t_listx **stack_b)
{
	t_listx	*last;
	t_listx	*prev;

	last = *stack_b;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	ps_lstadd_front(stack_b, last);
	index_init(stack_b);
	write(1, "rrb", 3);
}

void	rrr(t_listx **stack_a, t_listx **stack_b)
{
	t_listx	*last;
	t_listx	*prev;

	last = *stack_a;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	ps_lstadd_front(stack_a, last);
	index_init(stack_a);
	last = *stack_b;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	ps_lstadd_front(stack_b, last);
	index_init(stack_b);
	write(1, "rrr", 3);
}
