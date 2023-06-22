/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:14:27 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/20 17:31:55 by jcardina         ###   ########.fr       */
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
	mem ->max = tmp ->content;
	while (tmp)
	{
		if (tmp ->content < mem -> min)
			mem ->min = tmp ->content;
		if (tmp ->content > mem -> max)
			mem ->max = tmp ->content;
		tmp = tmp ->next;
	}
}

void	init_b(t_listx **stack_a, t_listx **stack_b, t_memo *mem)
{
	t_listx	*tmp;

	ft_mid(stack_a, mem);
	while (ps_lstsize(*stack_a) != 3 && ps_lstsize(*stack_a) != 2 && ps_lstsize(*stack_a) != 5)
	{
		tmp = *stack_a;
		if ((tmp ->content < mem ->mid) && (tmp -> content != mem ->min))
			pb(stack_a, stack_b);
		else if ((tmp ->content > mem ->mid) && (tmp -> content != mem ->max))
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
		else if ((tmp ->content == mem ->min || tmp ->content == mem ->mid
			|| tmp ->content == mem -> max))
			ra(stack_a);
	}
	if(ps_lstsize(*stack_a) == 2)
	{
		if((*stack_a) ->content == mem ->max)
			ra(stack_a);
	}
	else if(ps_lstsize(*stack_a) == 5)
		order_5(stack_a, stack_b, mem);
	else if(ps_lstsize(*stack_a) == 3)
		order_3(stack_a, mem);
}

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
	int i;

	i = 0;
	if(stack_sorted(*stack_a))
		return;
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	ft_mid(stack_a, mem);
	order_3(stack_a, mem);
	if (((*stack_b) ->content < mem->max && (*stack_b) ->content > mem->min)
		&& (((*stack_b)->next)->content < mem->max
			&& ((*stack_b)->next)->content > mem->min))
		return;
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
		else if(ps_lstsize(*stack_b) == 2)
			rb(stack_b);
	}
	ft_mid(stack_a, mem);
}
