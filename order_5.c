/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:11:52 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/19 15:51:23 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_5(t_listx **stack_a, t_listx **stack_b, t_memo *mem)
{
	int i;

	i = 0;
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	ft_mid(stack_a, mem);
	order_3(stack_a, mem);
	while(i++ < 2)
	{
		if ((*stack_b) ->content > mem ->max)
		{
			pa(stack_a, stack_b);
			ra(stack_a);
			ft_mid(stack_a, mem);
		}
		else if((*stack_b) ->content <= mem ->min)
		{
			pa(stack_a, stack_b);
			ft_mid(stack_a, mem);
		}
		rb(stack_b);
	}
	ft_mid(stack_a, mem);
}
