/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_3n5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:03:40 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/22 18:12:57 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_3(t_listx **s_a, t_memo *mem)
{
	t_listx	*tmp;

	tmp = *s_a;
	if (tmp ->content == mem->min && ps_lstlast(*s_a)-> content != mem ->max)
	{
		sa(s_a);
		ra(s_a);
	}
	else if (tmp ->content != mem->max && tmp ->content != mem->min)
	{
		if (ps_lstlast(*s_a)-> content == mem ->min)
			rra(s_a);
		else
			sa(s_a);
	}
	else if (tmp ->content == mem->max)
	{
		if (ps_lstlast(*s_a)-> content != mem ->min)
			ra(s_a);
		else
		{
			sa(s_a);
			rra(s_a);
		}
	}
}

void	order_5(t_listx **stack_a, t_listx **stack_b, t_memo *mem)
{
	if (stack_sorted(*stack_a))
		return ;
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	ft_mid(stack_a, mem);
	order_3(stack_a, mem);
	if (((*stack_b)->content < mem->max && (*stack_b)->content > mem->min)
		&& (((*stack_b)->next)->content < mem->max
			&& ((*stack_b)->next)->content > mem->min))
		return ;
	order_5_pt2(stack_a, stack_b, mem);
	ft_mid(stack_a, mem);
}

void	order_5_pt2(t_listx **stack_a, t_listx **stack_b, t_memo *mem)
{
	int	i;

	i = 0;
	while (i++ < 2)
	{
		if ((*stack_b)->content > mem ->max)
		{
			pa(stack_a, stack_b);
			ra(stack_a);
			ft_mid(stack_a, mem);
		}
		else if ((*stack_b)->content <= mem ->min)
		{
			pa(stack_a, stack_b);
			ft_mid(stack_a, mem);
		}
		else if (ps_lstsize(*stack_b) == 2)
			rb(stack_b);
	}
}
