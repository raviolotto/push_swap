/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:04:34 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/14 16:01:48 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	read_inst(t_listx  **stack_a, t_listx **stack_b, t_inst *inst)
{
	while (inst ->a_index > 0 && inst ->b_index > 0)
	{
		rr(stack_a, stack_b);
		inst ->a_index--;
		inst ->b_index--;
	}
	while (inst ->a_index > 0)
	{
		ra(stack_a);
		inst ->a_index--;
	}
	while (inst ->b_index > 0)
	{
		rb(stack_b);
		inst ->b_index--;
	}
	pa(stack_a, stack_b);
	return;
}

void	algoritm(t_listx **stack_a, t_listx **stack_b, t_inst	*inst)
{
	while (ps_lstsize(*stack_b) != 0)
	{
		best_move(stack_a, stack_b, inst);
		read_inst(stack_a, stack_b,inst);
	}
}

void	best_move(t_listx **stack_a, t_listx **stack_b, t_inst	*inst)
{
	t_listx	*tmp;
	int		count;

	tmp = *stack_b;
	while (tmp)
	{
		count = spot_finder(stack_a, stack_b);
		if ((count + tmp ->index) < (inst ->a_index + inst ->b_index))
		{
			inst ->a_index = count;
			inst ->b_index = tmp ->index;
		}
		tmp = tmp ->next;
	}
}

//return = pos in stack a
int	spot_finder(t_listx **stack_a, t_listx **stack_b)
{
	t_listx	*tmp;
	t_listx	*tmp2;

	tmp = *stack_a;
	tmp2 = *stack_b;
	while (tmp)
	{
		if (tmp2 ->content < tmp ->content
			&& tmp2 ->content > ((ps_lstlast(*stack_a))->content))
			return (tmp ->index);
		if (tmp2 ->content > tmp ->content
			&& tmp2 ->content < ((tmp ->next)->content))
			return (tmp ->index);
		tmp = tmp ->next;
	}
	return (-1);
}
