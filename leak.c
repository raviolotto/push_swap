/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leak.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:54:30 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/22 16:10:08 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_listx **stack_a, t_memo *mem, t_inst *inst)
{
	t_listx	*tmp;

	while(*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a) ->next;
		free(&((tmp) ->index));
		free(&((tmp) ->content));
		free(&((tmp) ->next));
	}
	free(&((mem) ->max));
	free(&((mem) ->min));
	free(&((mem) ->mid));
	free(&((inst) ->a_index));
	free(&((inst) ->b_index));
	free(&((inst) ->cases));
}
