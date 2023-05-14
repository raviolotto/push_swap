/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:06:56 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/14 18:52:56 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlst(p_list **stack_a)
{
	p_list	*tmp;
	int i;

	while(*stack_a)
	{
		tmp = (*stack_a)->next;
		i = (*stack_a)->content;
		printf("%d .", i);
		*stack_a = tmp;
	}
}
