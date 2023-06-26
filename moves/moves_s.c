/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:50:06 by amema             #+#    #+#             */
/*   Updated: 2023/06/26 19:06:44 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_listx **stack_a, int i)
{
	t_listx	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	index_init(stack_a);
	if (i == 1)
		write(1, "sa\n", 3);
}

void	sb(t_listx **stack_b, int i)
{
	t_listx	*tmp;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	index_init(stack_b);
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ss(t_listx **stack_b, t_listx **stack_a, int i)
{
	t_listx	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	index_init(stack_b);
	index_init(stack_a);
	if (i == 1)
		write(1, "ss\n", 3);
}
