/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:59:32 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/15 19:03:49 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//da fare il lettore delle istruzioni

void	inst_reader(t_listx **stack_a, t_listx **stack_b, t_inst *inst)
{
	return ;
}

void	tiger(t_listx **stack_a, t_listx **stack_b, t_inst *inst)
{
	//questo va bene nel caso tiger
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
	return ;
}


