/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:04:34 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/15 17:31:01 by jcardina         ###   ########.fr       */
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
	inst_init(inst);
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
		count = spot_finder(stack_a, &tmp);
		if ((count + tmp ->index) < (inst ->a_index + inst ->b_index))
		{
			// ft_printf("count = %d  ", count);
			// ft_printf("b index = %d  ", tmp ->index);
			// ft_printf("count + b index = %d  ", count + tmp ->index);
			inst ->a_index = count;
			inst ->b_index = tmp ->index;
		}
		//write(1, "o", 1);
		// ft_printf("count = %d  ", count);
		// ft_printf("b index = %d  ", tmp ->index);
		// ft_printf("count + b index = %d  ", count + tmp ->index);
		tmp = tmp ->next;
	}
}

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
				return (tmp ->index + 1);
		tmp = tmp ->next;
	}
	return (-1);
}
