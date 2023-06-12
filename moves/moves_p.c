/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:52:57 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/12 19:29:51 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_listx **stack_a, t_listx **stack_b)
{
	t_listx	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	ps_lstadd_front(stack_b, tmp);
	index_init(stack_b);
	write(1, "pb", 2);
	write(1, "\n", 1);
	return ;
}

void	pa(t_listx **stack_a, t_listx **stack_b)
{
	t_listx	*tmp;

	if (*stack_b == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	ps_lstadd_front(stack_a, tmp);
	index_init(stack_a);
	write(1, "pa", 2);
	write(1, "\n", 1);
	return ;
}
