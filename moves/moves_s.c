/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:50:06 by amema             #+#    #+#             */
/*   Updated: 2023/06/12 20:12:09 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_listx **stack_a)
{
	t_listx	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	index_init(stack_a);
	write(1, "sa", 2);
	write(1, "\n", 1);
}

void	sb(t_listx **stack_b)
{
	t_listx	*tmp;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	index_init(stack_b);
	write(1, "sb", 2);
	write(1, "\n", 1);
}

void	ss(t_listx **stack_b, t_listx **stack_a)
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
	write(1, "ss", 2);
	write(1, "\n", 1);
}
