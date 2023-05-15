/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amema <amema@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:52:57 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/15 17:50:13 by amema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(p_list **stack_a, p_list **stack_b)
{
	p_list	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	ps_lstadd_front(stack_b, tmp);
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
	return ;
}
