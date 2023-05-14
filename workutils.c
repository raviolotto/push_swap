/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:06:56 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/14 19:42:54 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlst(p_list **stack_a)
{
	p_list	*tmp;
	p_list	*save;
	int i;

	save = *stack_a;
	while(save)
	{
		tmp = save->next;
		i = save->content;
		printf("%d .", i);
		save = tmp;
	}
}
