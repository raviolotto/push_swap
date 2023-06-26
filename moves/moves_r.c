/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:26:51 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/26 19:06:06 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_listx **stack_a, int i)
{
	t_listx	*tmp;
	t_listx	*last;

	if (ps_lstsize(*stack_a) == 1)
		return ;
	last = ps_lstlast(*stack_a);
	tmp = *stack_a;
	*stack_a = tmp->next;
	last->next = tmp;
	tmp->next = NULL;
	index_init(stack_a);
	if (i == 1)
		write(1, "ra\n", 3);
}

void	rb(t_listx **stack_b, int i)
{
	t_listx	*tmp;
	t_listx	*last;

	if (ps_lstsize(*stack_b) == 1)
		return ;
	last = ps_lstlast(*stack_b);
	tmp = *stack_b;
	*stack_b = tmp->next;
	last->next = tmp;
	tmp->next = NULL;
	index_init(stack_b);
	if (i == 1)
		write(1, "rb\n", 3);
}

void	rr(t_listx **stack_a, t_listx **stack_b, int i)
{
	t_listx	*tmp;
	t_listx	*last;

	if (ps_lstsize(*stack_a) == 1 || ps_lstsize(*stack_b) == 1)
		return ;
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
	if (i == 1)
		write(1, "rr\n", 3);
}
