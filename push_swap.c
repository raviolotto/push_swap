/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:10:51 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/14 19:43:09 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(char **av, p_list **stack_a, int row_nb, int i)
{
	p_list	*tmp;

	while(i < row_nb)
	{
		tmp = ps_lstnew(ft_atoi(av[i]));
		ps_lstadd_back(stack_a, tmp);
		i++;
	}
}

void	list_init(int ac, char **av, p_list **stack_a)
{
	char	**number_matrix;
	int		row_nb;

	row_nb = 0;
	if (ac == 2)
	{
		number_matrix = ft_split(av[1], ' ');
		while (number_matrix[row_nb] != NULL)
		row_nb++;
		fill_stack(number_matrix, stack_a, row_nb, 0);
	}
	else
		fill_stack(av, stack_a, ac, 1);
}

int	main(int ac, char ** av)
{
	p_list *stack_a;
	p_list *stack_b;

	stack_a = NULL;
	stack_b = NULL;

	if(ac < 2)
		return (0);
	list_init(ac, av, &stack_a);
	ft_printlst(&stack_a);
	ra(&stack_a);
	ft_printlst(&stack_a);
	return (0);
}
