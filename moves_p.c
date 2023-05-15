/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:52:57 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/15 15:02:34 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(p_list **stack_a, p_list **stack_b)
{
	p_list	*tmp;

	tmp = *stack_a;
	tmp = tmp->next;

	ps_lstadd_front(stack_b, *stack_a);
	stack_a = &tmp;
}
