/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amema <amema@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:50:06 by amema             #+#    #+#             */
/*   Updated: 2023/05/15 18:12:37 by amema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(p_list **stack_a)
{
    p_list  *tmp;

    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = (*stack_a)->next;
    (*stack_a)->next = tmp;
}

void    sb(p_list **stack_b)
{
    p_list  *tmp;

    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = (*stack_b)->next;
    (*stack_b)->next = tmp;
}

void    ss(p_list **stack_b, p_list **stack_a)
{
    p_list  *tmp;

    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = (*stack_a)->next;
    (*stack_a)->next = tmp;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = (*stack_b)->next;
    (*stack_b)->next = tmp;
}
