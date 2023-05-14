/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:26:51 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/14 19:37:01 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(p_list **stack_a)
{
	p_list	*tmp;
	p_list	*last;

	last = ps_lstlast(*stack_a);
	tmp = *stack_a;
	*stack_a = tmp->next;
	last->next = tmp;
	tmp->next = NULL;
}
