/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:50:06 by amema             #+#    #+#             */
/*   Updated: 2023/06/12 18:19:06 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sa(t_listx **stack_a)
{
    t_listx  *tmp;

    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = (*stack_a)->next;
    (*stack_a)->next = tmp;
}

void    sb(t_listx **stack_b)
{
    t_listx  *tmp;

    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = (*stack_b)->next;
    (*stack_b)->next = tmp;
}

void    ss(t_listx **stack_b, t_listx **stack_a)
{
    t_listx  *tmp;

    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = (*stack_a)->next;
    (*stack_a)->next = tmp;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = (*stack_b)->next;
    (*stack_b)->next = tmp;
}
