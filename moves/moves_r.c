/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:26:51 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/12 18:19:06 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_listx **stack_a)
{
	t_listx	*tmp;
	t_listx	*last;

	last = ps_lstlast(*stack_a);
	tmp = *stack_a;
	*stack_a = tmp->next;
	last->next = tmp;
	tmp->next = NULL;
	index_init(stack_a);
	write(1, "ra", 2);
}


void	rb(t_listx **stack_b)
{
	t_listx	*tmp;
	t_listx	*last;

	last = ps_lstlast(*stack_b);
	tmp = *stack_b;
	*stack_b = tmp->next;
	last->next = tmp;
	tmp->next = NULL;
	index_init(stack_b);
	write(1, "rb", 2);
}

void	rr(t_listx **stack_a, t_listx **stack_b)
{
	t_listx	*tmp;
	t_listx	*last;

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
