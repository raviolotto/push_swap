/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:14:27 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/12 18:35:54 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mid(t_listx **stack_a, t_memo *mem)
{
	int		cont;
	int		size;
	t_listx	*tmp;
	t_listx	*n;

	size = ps_lstsize(*stack_a);
	cont = 0;
	tmp = *stack_a;
	n = *stack_a;
	while (n)
	{
		while (tmp)
		{
			if (n ->content > tmp ->content)
				cont++;
			tmp = tmp -> next;
		}
		if (cont == size / 2)
			mem ->mid = n ->content;
		n = n->next;
		tmp = *stack_a;
		cont = 0;
	}
	ft_min_max(stack_a, mem);
}

void	ft_min_max(t_listx **stack_a, t_memo *mem)
{
	t_listx	*tmp;

	tmp = *stack_a;
	mem -> min = tmp ->content;
	while(tmp)
	{
		if(tmp ->content < mem -> min)
			mem ->min = tmp ->content;
		if(tmp ->content > mem -> max)
			mem ->max = tmp ->content;
		tmp = tmp ->next;
	}
}
