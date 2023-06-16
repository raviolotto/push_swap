/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:06:56 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/16 19:44:56 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlst(t_listx **stack_a)
{
	t_listx	*tmp;
	t_listx	*save;
	int		i;

	save = *stack_a;
	while (save)
	{
		tmp = save->next;
		i = save->content;
		ft_printf("%d ", i);
		save = tmp;
	}
	ft_printf(" / ");
}

void	index_init(t_listx **stack_a)
{
	t_listx	*tmp;
	t_listx	*save;
	int		i;

	i = 0;
	save = *stack_a;
	while (save)
	{
		tmp = save->next;
		save->index = i;
		i++;
		save = tmp;
	}
}

void	ft_printindex(t_listx **stack_a)
{
	t_listx	*tmp;
	t_listx	*save;
	int		i;

	save = *stack_a;
	while (save)
	{
		tmp = save->next;
		i = save->index;
		ft_printf("%d ", i);
		save = tmp;
	}
}

void	final_rotate(t_listx **stack_a, t_memo *m)
{
	t_listx	*tmp;
	int		i;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp ->content == m ->min)
		{
			if (tmp ->index > (ps_lstsize(*stack_a) / 2))
			{
				i = tmp ->index;
				while (i++ < ps_lstsize(*stack_a))
					rra(stack_a);
			}
			if (tmp ->index <= (ps_lstsize(*stack_a) / 2))
			{
				i = tmp ->index;
				while (i-- > 0)
					ra(stack_a);
			}
		}
		tmp = tmp ->next;
	}
}
