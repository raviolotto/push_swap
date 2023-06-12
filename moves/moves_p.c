/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:52:57 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/12 17:12:00 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(p_list **stack_a, p_list **stack_b)
{
	p_list	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	ps_lstadd_front(stack_b, tmp);
	index_init(stack_b);
	write(1, "pb", 2);
	return ;
}

void	pa(p_list **stack_a, p_list **stack_b)
{
	p_list	*tmp;

	if (*stack_b == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	ps_lstadd_front(stack_a, tmp);
	index_init(stack_a);
	write(1, "pa", 2);
	return ;
}
