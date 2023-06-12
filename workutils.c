/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:06:56 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/12 18:21:50 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlst(t_listx **stack_a)
{
	t_listx	*tmp;
	t_listx	*save;
	int i;

	save = *stack_a;
	while(save)
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
	int i;

	i = 0;
	save = *stack_a;
	while(save)
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
	int i;

	save = *stack_a;
	while(save)
	{
		tmp = save->next;
		i = save->index;
		ft_printf("%d ", i);
		save = tmp;
	}
}
